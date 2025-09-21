@class NSString;

@interface SFAuthenticationDevice : SFPeerDevice <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *modelDescription;
@property (readonly, nonatomic) char enabledAsKey;
@property (readonly, nonatomic) char enabledAsLock;
@property (readonly, nonatomic) char bluetoothCloudPaired;
@property (readonly, nonatomic) NSString *idsDeviceID;


- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWith:(id)a0;

@end
