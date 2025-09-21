@class NSString, IRRapportDeviceDO, IRAVOutputDeviceDO;

@interface IRNodeDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *avOutpuDeviceIdentifier;
@property (readonly, nonatomic) NSString *rapportIdentifier;
@property (readonly, nonatomic) NSString *idsIdentifier;
@property (readonly, nonatomic) IRAVOutputDeviceDO *avOutputDevice;
@property (readonly, nonatomic) IRRapportDeviceDO *rapportDevice;
@property (readonly, nonatomic) char isLocal;

+ (id)nodeDOFromNode:(id)a0;
+ (id)nodeFromNodeDO:(id)a0;
+ (id)nodeDOWithAvOutpuDeviceIdentifier:(id)a0 rapportIdentifier:(id)a1 idsIdentifier:(id)a2 avOutputDevice:(id)a3 rapportDevice:(id)a4 isLocal:(char)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)computeName;
- (id)computedIdsIdentifier;
- (id)computedMediaRemoteIdenfifier;
- (id)computedMediaRouteIdentifier;
- (id)copyWithReplacementAvOutpuDeviceIdentifier:(id)a0;
- (id)copyWithReplacementAvOutputDevice:(id)a0;
- (id)copyWithReplacementIdsIdentifier:(id)a0;
- (id)copyWithReplacementIsLocal:(char)a0;
- (id)copyWithReplacementRapportDevice:(id)a0;
- (id)copyWithReplacementRapportIdentifier:(id)a0;
- (id)deviceTypeAndSubType;
- (id)exportAsDictionary;
- (id)initWithAvOutpuDeviceIdentifier:(id)a0 rapportIdentifier:(id)a1 idsIdentifier:(id)a2 avOutputDevice:(id)a3 rapportDevice:(id)a4 isLocal:(char)a5;
- (char)isEqualToNodeDO:(id)a0;

@end
