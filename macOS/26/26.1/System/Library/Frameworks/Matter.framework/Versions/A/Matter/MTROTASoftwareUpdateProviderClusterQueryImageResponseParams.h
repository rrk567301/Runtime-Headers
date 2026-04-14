@class NSNumber, NSString, NSData;

@interface MTROTASoftwareUpdateProviderClusterQueryImageResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *delayedActionTime;
@property (copy, nonatomic) NSString *imageURI;
@property (copy, nonatomic) NSNumber *softwareVersion;
@property (copy, nonatomic) NSString *softwareVersionString;
@property (copy, nonatomic) NSData *updateToken;
@property (copy, nonatomic) NSNumber *userConsentNeeded;
@property (copy, nonatomic) NSData *metadataForRequestor;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; unsigned int x1; char *x2; })_setFieldsFromDecodableStruct:(const void *)a0;
- (id)initWithDecodableStruct:(const void *)a0;

@end
