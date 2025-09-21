@class NSString;

@interface MIDINetworkSession : NSObject {
    void *_imp;
}

@property (nonatomic, getter=isEnabled) char enabled;
@property (readonly, nonatomic) unsigned long long networkPort;
@property (readonly, nonatomic) NSString *networkName;
@property (readonly, nonatomic) NSString *localName;
@property (nonatomic) unsigned long long connectionPolicy;

+ (id)defaultSession;

- (void)dealloc;
- (id)init;
- (id)connections;
- (id)contacts;
- (char)removeConnection:(id)a0;
- (char)addConnection:(id)a0;
- (char)addContact:(id)a0;
- (char)removeContact:(id)a0;
- (void)contactsChanged;
- (char)addOrRemoveConnection:(id)a0 add:(char)a1;
- (unsigned int)destinationEndpoint;
- (void)refreshBonjourName;
- (void)sessionChanged;
- (void)setStateToEntity;
- (unsigned int)sourceEndpoint;
- (void)updateFromEntity;

@end
