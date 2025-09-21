@class NSString;

@interface NSPersonNameComponents : NSObject <NSCopying, NSSecureCoding> {
    id _private;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *namePrefix;
@property (copy) NSString *givenName;
@property (copy) NSString *middleName;
@property (copy) NSString *familyName;
@property (copy) NSString *nameSuffix;
@property (copy) NSString *nickname;
@property (copy) NSPersonNameComponents *phoneticRepresentation;

+ (id)__componentsRequiredForScriptDetectionWithPhoneticDesired:(char)a0;
+ (id)_allComponents;
+ (id)_allProperties;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_isEmpty;
- (id)_scriptDeterminingStringRepresentationWithPhoneticDesired:(char)a0;
- (char)isEqualToComponents:(id)a0;

@end
