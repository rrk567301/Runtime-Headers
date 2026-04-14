@class NSURL, PKPassUpcomingPassInformationImageManifest;

@interface PKPassUpcomingPassInformationEntryContentEvent : PKPassUpcomingPassInformationEntryContent

@property (readonly, copy, nonatomic) NSURL *sellURL;
@property (readonly, copy, nonatomic) NSURL *transferURL;
@property (readonly, copy, nonatomic) NSURL *bagPolicyURL;
@property (readonly, copy, nonatomic) NSURL *orderFoodURL;
@property (readonly, copy, nonatomic) NSURL *transitInformationURL;
@property (readonly, copy, nonatomic) NSURL *parkingInformationURL;
@property (readonly, copy, nonatomic) NSURL *directionsInformationURL;
@property (readonly, copy, nonatomic) NSURL *merchandiseURL;
@property (readonly, copy, nonatomic) NSURL *accessibilityURL;
@property (readonly, copy, nonatomic) NSURL *purchaseParkingURL;
@property (readonly, copy, nonatomic) NSURL *partnerAddOnURL;
@property (readonly, copy, nonatomic) NSURL *venueEmailURL;
@property (readonly, copy, nonatomic) NSURL *venuePhoneNumberURL;
@property (readonly, copy, nonatomic) NSURL *venueWebsiteURL;
@property (readonly, nonatomic) PKPassUpcomingPassInformationImageManifest *venueMapImageManifest;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToContent:(id)a0;
- (BOOL)populateFromDictionary:(id)a0 bundle:(id)a1;

@end
