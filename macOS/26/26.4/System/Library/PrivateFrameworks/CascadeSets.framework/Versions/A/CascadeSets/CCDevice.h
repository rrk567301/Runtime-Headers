@class NSUUID, NSString;

@interface CCDevice : NSObject <BMOPACKCodable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *deviceUUID;
@property (readonly, nonatomic) unsigned char options;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *idsDeviceIdentifier;
@property (readonly, nonatomic) long long platform;

- (BOOL)isLocal;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqualToDevice:(id)a0;
- (unsigned long long)hash;
- (id)initFromDictionary:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithDeviceUUID:(id)a0 idsDeviceId:(id)a1 platform:(long long)a2 options:(unsigned char)a3;

@end
