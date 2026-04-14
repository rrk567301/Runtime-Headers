@class NSString, NSSet, NSURL, NSDate, PKImage;

@interface PKPhysicalCard : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *accountUserAltDSID;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSURL *frontFaceImageURL;
@property (copy, nonatomic) NSString *nameOnCard;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSString *FPANSuffix;
@property (copy, nonatomic) NSString *trackingNumber;
@property (copy, nonatomic) NSString *shippingCompany;
@property (copy, nonatomic) NSSet *orderActivity;
@property (copy, nonatomic) NSSet *shippingActivity;
@property (copy, nonatomic) NSString *activationCodeHash;
@property (retain, nonatomic) PKImage *frontFaceImage;

+ (BOOL)physicalCard:(id)a0 matchesActivationCode:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)jsonDictionaryRepresentation;
- (id)latestOrderActivity;
- (id)latestShippingActivity;
- (id)shipmentTrackingURL;

@end
