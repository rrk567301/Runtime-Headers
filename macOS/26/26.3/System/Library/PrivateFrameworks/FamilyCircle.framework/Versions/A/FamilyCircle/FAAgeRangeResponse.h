@class NSNumber, NSArray;

@interface FAAgeRangeResponse : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long verificationMethod;
@property (readonly, nonatomic) NSNumber *lowerbound;
@property (readonly, nonatomic) NSNumber *upperbound;
@property (readonly, nonatomic) long long validationLevel;
@property (readonly, nonatomic) long long response;
@property (readonly, nonatomic) NSArray *parentalControlsInformation;
@property (readonly, nonatomic) BOOL isSharingNewInformation;

+ (id)ageRangeResponseDisplayNames;
+ (id)ageRangeValidationLevelDisplayNames;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)ageRangeValidationLevelToString;
- (id)ageRangeResponseToString;
- (id)initWithLowerbound:(id)a0 upperbound:(id)a1 validationLevel:(long long)a2 response:(long long)a3 parentalControlsInformation:(id)a4 isSharingNewInformation:(BOOL)a5 verificationMethod:(long long)a6;
- (BOOL)isEqualAgeRange:(id)a0;

@end
