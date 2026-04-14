@class NSString, NSData, NSDictionary;

@interface AMSCardMetadataRegistrationResult : NSObject

@property (retain) NSString *cardArtwork;
@property (retain) NSData *cardArtworkData;
@property long long cardType;
@property (retain) NSString *descriptionLong;
@property (retain) NSString *descriptionShort;
@property long long paymentNetwork;
@property (retain) NSString *serialNumber;
@property (retain) NSString *suffix;
@property (retain) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSDictionary *dictionary;

- (void).cxx_destruct;
- (id)init;

@end
