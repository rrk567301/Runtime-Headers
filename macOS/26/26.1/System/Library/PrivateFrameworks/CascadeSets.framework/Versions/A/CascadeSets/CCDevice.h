@class NSUUID, NSString;

@interface CCDevice : NSObject <BMOPACKCodable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *deviceUUID;
@property (readonly, nonatomic) unsigned char options;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *idsDeviceIdentifier;
@property (readonly, nonatomic) long long platform;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isLocal;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToDevice:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initFromDictionary:(id)a0;
- (id)init;
- (id)initWithDeviceUUID:(id)a0 idsDeviceId:(id)a1 platform:(long long)a2 options:(unsigned char)a3;

@end
