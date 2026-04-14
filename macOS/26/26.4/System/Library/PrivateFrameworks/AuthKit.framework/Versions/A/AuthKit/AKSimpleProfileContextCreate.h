@class NSString, NSNumber;

@interface AKSimpleProfileContextCreate : AKSimpleProfileContext

@property (copy, nonatomic) NSString *profileName;
@property (retain, nonatomic) NSNumber *imageID;
@property (nonatomic) long long ageCategory;
@property (readonly, copy, nonatomic) NSString *sponsorAltDSID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithProfileName:(id)a0 sponsorAltDSID:(id)a1 imageID:(id)a2 ageCategory:(long long)a3;

@end
