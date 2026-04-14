@class NSNumber, NSString;

@interface AKSimpleProfileModel : AKDictionaryBackedModel

@property (copy, nonatomic) NSNumber *DSID;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *profileName;
@property (copy, nonatomic) NSString *sponsorAltDSID;
@property (nonatomic) long long ageCategory;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *imageID;
@property (copy, nonatomic) NSNumber *imageId;

- (void).cxx_destruct;
- (id)validationRequirements;

@end
