@class DMFControlGroupIdentifier, NSString, CRKUser, NSDictionary, NSDate, NSSet;

@interface CRKCourse : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (copy, nonatomic) NSString *courseName;
@property (copy, nonatomic) NSString *courseDescription;
@property (nonatomic) unsigned long long courseMascotType;
@property (nonatomic) unsigned long long courseColorType;
@property (retain, nonatomic) CRKUser *courseUser;
@property (copy, nonatomic) NSDictionary *instructorsByIdentifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) char mustRequestUnenroll;
@property (nonatomic, getter=isRequestingUnenroll) char requestingUnenroll;
@property (retain, nonatomic) NSDate *automaticRemovalDate;
@property (nonatomic) char studentCredentialsAreValid;
@property (retain, nonatomic) NSSet *trustedCertificatePersistentIds;
@property (retain, nonatomic) NSSet *validTrustedCertificatePersistentIds;
@property (readonly, nonatomic, getter=isManaged) char managed;
@property (readonly, nonatomic, getter=isExpired) char expired;
@property (readonly, nonatomic) char allowsUnenroll;

+ (id)new;
+ (id)stringForType:(unsigned long long)a0;
+ (id)keyPathsForValuesAffectingExpired;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setManaged:(char)a0;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)initWithIdentifier:(id)a0 managed:(char)a1;
- (char)isDeeplyEqual:(id)a0;
- (char)isEqualToCourse:(id)a0;

@end
