@class NSString;

@interface SFAuthenticationDevice : SFPeerDevice <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *modelDescription;
@property (readonly, nonatomic) BOOL enabledAsKey;
@property (readonly, nonatomic) BOOL enabledAsLock;
@property (readonly, nonatomic) BOOL bluetoothCloudPaired;
@property (readonly, nonatomic) NSString *idsDeviceID;


- (id)init;
- (id)initWith:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
