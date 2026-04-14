@class NSString, NSDictionary;

@interface AMSCardMetadataRegistrationResult : NSObject

@property (retain) NSString *cardArtwork;
@property long long cardType;
@property (retain) NSString *descriptionLong;
@property (retain) NSString *descriptionShort;
@property long long paymentNetwork;
@property (retain) NSString *serialNumber;
@property (retain) NSString *suffix;
@property (retain, nonatomic) NSDictionary *dictionary;

- (id)init;
- (void).cxx_destruct;

@end
