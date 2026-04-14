@class NSString;

@interface MIDINetworkSession : NSObject {
    void *_imp;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) unsigned long long networkPort;
@property (readonly, nonatomic) NSString *networkName;
@property (readonly, nonatomic) NSString *localName;
@property (nonatomic) unsigned long long connectionPolicy;

+ (id)defaultSession;

- (void)dealloc;
- (id)init;
- (id)connections;
- (id)contacts;
- (BOOL)removeConnection:(id)a0;
- (BOOL)addConnection:(id)a0;
- (BOOL)addContact:(id)a0;
- (BOOL)removeContact:(id)a0;
- (void)updateFromEntity;
- (void)setStateToEntity;
- (void)refreshBonjourName;
- (BOOL)addOrRemoveConnection:(id)a0 add:(BOOL)a1;
- (void)sessionChanged;
- (void)contactsChanged;
- (unsigned int)sourceEndpoint;
- (unsigned int)destinationEndpoint;

@end
