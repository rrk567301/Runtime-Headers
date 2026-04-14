@class NSString, NSNumber, NSDate;

@interface FAAgeRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSNumber *lowerbound;
@property (readonly, nonatomic) NSNumber *upperbound;
@property (readonly, nonatomic) long long response;
@property (readonly, nonatomic) long long responseType;
@property (readonly, nonatomic) long long validationLevel;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) NSDate *invalidatedAt;

+ (id)ageRangeResponseDisplayNames;
+ (id)ageRangeResponseTypeDisplayNames;
+ (id)ageRangeValidationLevelDisplayNames;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)ageRangeValidationLevelToString;
- (id)ageRangeResponseToString;
- (id)ageRangeResponseTypeToString;
- (id)initWithAltDSID:(id)a0 bundleID:(id)a1 lowerbound:(id)a2 upperbound:(id)a3;
- (id)initWithAltDSID:(id)a0 bundleID:(id)a1 lowerbound:(id)a2 upperbound:(id)a3 createdAt:(id)a4;
- (id)initWithAltDSID:(id)a0 bundleID:(id)a1 lowerbound:(id)a2 upperbound:(id)a3 response:(long long)a4 responseType:(long long)a5 createdAt:(id)a6 invalidatedAt:(id)a7 validationLevel:(long long)a8;
- (BOOL)isEqualAgeRange:(id)a0;

@end
