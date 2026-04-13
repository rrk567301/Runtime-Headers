@class NSString, NSURL, CLLocation, NSNumber;

@interface MADVIVisualSearchGatingRequest : MADRequest

@property (copy, nonatomic) NSNumber *queryID;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSURL *referralURL;
@property (copy, nonatomic) NSNumber *imageType;
@property (copy, nonatomic) NSString *featureIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
