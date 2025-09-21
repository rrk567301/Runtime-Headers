@class NSString, NSArray, NSNumber;

@interface FAAgeRangeRequestModel : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long requestType;
@property (readonly, nonatomic) long long entryPoint;
@property (readonly, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) NSArray *ageGates;
@property (readonly, nonatomic) NSNumber *userAgeOverride;
@property (readonly, nonatomic) NSNumber *attestedAtOverrideInDays;
@property (readonly, nonatomic) NSString *bundleID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequestType:(long long)a0 entryPoint:(long long)a1 altDSID:(id)a2 bundleID:(id)a3 ageGates:(id)a4 userAgeOverride:(id)a5 attestedAtOverrideInDays:(id)a6;

@end
