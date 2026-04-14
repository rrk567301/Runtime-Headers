@class NSString, NetAddressBook2, NetServiceDirectory, NSMutableArray;

@interface NetworkDriverAdapter : NSObject {
    NSString *mComputerName;
    NetServiceDirectory *mBonjourDirectory;
    NetAddressBook2 *mAddressBook;
    unsigned int mMIDIClient;
    unsigned int mMIDIPort;
    unsigned int mMIDI2Port;
    unsigned int mMIDIDevice;
    unsigned int mSelectedMIDISource;
    NSMutableArray *mSessions;
    unsigned int mMIDIUMPDevice;
    NSMutableArray *mCachedSources;
    NSMutableArray *mCachedDestinations;
    struct __SCPreferences { } *mSysPrefs;
    struct unique_ptr<NetworkDriverRTData, std::default_delete<NetworkDriverRTData>> { struct { struct NetworkDriverRTData *__ptr_; } ; } mRealtimeData;
}

@property (copy, nonatomic) id /* block */ onSessionsChanged;
@property (copy, nonatomic) id /* block */ onDirectoryChanged;
@property (copy, nonatomic) id /* block */ onSessionDetailsChanged;
@property (copy, nonatomic) id /* block */ onConnectionStatusChanged;
@property (copy, nonatomic) id /* block */ onErrorOccurred;
@property (readonly, nonatomic) BOOL foundNetworkDevice;
@property (readonly, nonatomic) BOOL foundUMPNetworkDevice;
@property (readonly, nonatomic) BOOL networkMIDI2Enabled;

- (void)cleanup;
- (id)sessions;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)addSession:(int)a0;
- (void)dealloc;
- (void)entityPropertyChanged:(unsigned int)a0 property:(id)a1;
- (id)getLatencyData:(int)a0;
- (void)addAddressBookEntry:(id)a0;
- (id)addressBookEntriesWithType:(int)a0;
- (id)bonjourServicesWithType:(int)a0;
- (void)deleteAddressBookEntry:(unsigned int)a0;
- (void)deviceErrorsChanged;
- (id)getMIDIDestinations;
- (id)getMIDISources;
- (void)iaContextualHelpButtonPressed;
- (BOOL)isRendezvousServiceLocal:(id)a0 selectedSession:(id)a1;
- (BOOL)isRendezvousServiceSelectable:(id)a0 selectedSession:(id)a1;
- (void)notifyConnectionStatusChanged:(BOOL)a0 serviceName:(id)a1;
- (void)notifyDirectoryChanged;
- (void)notifyError:(id)a0;
- (void)notifySessionDetailsChanged:(id)a0;
- (void)notifySessionsChanged;
- (void)observeLatencyForSession:(id)a0;
- (void)prunePersistentPeers;
- (void)removeSessionWithEntityID:(unsigned int)a0;
- (BOOL)sessionLocalNameIsDuplicate:(id)a0 selectedSession:(id)a1;
- (BOOL)sessionNetworkNameIsDuplicate:(id)a0 selectedSession:(id)a1;
- (void)syncSessionState;
- (void)updateAddressBookEntry:(id)a0;
- (void)updateMIDIEndpointCache;
- (void)visibleServicesDidChange:(id)a0;

@end
