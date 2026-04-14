@class NSString, NSData;

@interface SRSourceDevice : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *ephemeralIdentifier;
@property (retain, nonatomic) NSData *encryptedIdentifier;
@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSString *hardwareVersion;
@property (readonly, copy, nonatomic) NSString *firmwareVersion;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)sr_dictionaryRepresentation;
- (id)initWithIdentifier:(id)a0 manufacturer:(id)a1 model:(id)a2 hardwareVersion:(id)a3 firmwareVersion:(id)a4;

@end
