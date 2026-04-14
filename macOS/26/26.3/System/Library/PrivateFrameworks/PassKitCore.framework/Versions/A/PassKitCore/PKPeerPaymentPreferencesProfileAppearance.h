@interface PKPeerPaymentPreferencesProfileAppearance : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL shareLastName;
@property (nonatomic) BOOL shareProfilePicture;

- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToProfileAppearance:(id)a0;

@end
