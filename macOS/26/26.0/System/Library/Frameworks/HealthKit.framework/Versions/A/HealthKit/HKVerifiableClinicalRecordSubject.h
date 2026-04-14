@class NSString, NSDateComponents;

@interface HKVerifiableClinicalRecordSubject : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *fullName;
@property (readonly, copy) NSDateComponents *dateOfBirthComponents;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFullName:(id)a0 dateOfBirthComponents:(id)a1;

@end
