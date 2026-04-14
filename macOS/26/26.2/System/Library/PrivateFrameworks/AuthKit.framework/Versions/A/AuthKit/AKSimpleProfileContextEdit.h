@class NSString, NSNumber;

@interface AKSimpleProfileContextEdit : AKSimpleProfileContext

@property (retain, nonatomic) NSString *profileName;
@property (retain, nonatomic) NSNumber *imageID;
@property (nonatomic) long long ageCategory;

+ (BOOL)supportsSecureCoding;

- (id)initWithAltDSID:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
