@class NSString;

@interface NSPersonNameComponents : NSObject <NSCopying, NSSecureCoding> {
    id _private;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *namePrefix;
@property (copy) NSString *givenName;
@property (copy) NSString *middleName;
@property (copy) NSString *familyName;
@property (copy) NSString *nameSuffix;
@property (copy) NSString *nickname;
@property (copy) NSPersonNameComponents *phoneticRepresentation;

+ (id)_allComponents;
+ (id)_allProperties;
+ (id)__componentsRequiredForScriptDetectionWithPhoneticDesired:(BOOL)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isEmpty;
- (id)_scriptDeterminingStringRepresentationWithPhoneticDesired:(BOOL)a0;
- (BOOL)isEqualToComponents:(id)a0;

@end
