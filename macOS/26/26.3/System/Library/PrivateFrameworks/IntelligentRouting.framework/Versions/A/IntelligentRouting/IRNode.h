@class NSString, NSUUID;

@interface IRNode : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *avOutpuDeviceIdentifier;
@property (retain, nonatomic) NSString *rapportIdentifier;
@property (retain, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) NSUUID *HKAccessoryUniqueIdentifier;
@property (retain, nonatomic) NSUUID *HKRoomUniqueIdentifier;
@property (nonatomic) BOOL isLocal;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
