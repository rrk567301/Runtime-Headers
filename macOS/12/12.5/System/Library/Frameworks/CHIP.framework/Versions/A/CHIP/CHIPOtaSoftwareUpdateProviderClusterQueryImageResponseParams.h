@class NSNumber, NSString, NSData;

@interface CHIPOtaSoftwareUpdateProviderClusterQueryImageResponseParams : NSObject

@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSNumber *delayedActionTime;
@property (retain, nonatomic) NSString *imageURI;
@property (retain, nonatomic) NSNumber *softwareVersion;
@property (retain, nonatomic) NSString *softwareVersionString;
@property (retain, nonatomic) NSData *updateToken;
@property (retain, nonatomic) NSNumber *userConsentNeeded;
@property (retain, nonatomic) NSData *metadataForRequestor;

- (id)init;
- (void).cxx_destruct;

@end
