@class NSString, NSDictionary;
@protocol _WKAuthenticationPRFInputValuesStaging, _WKAuthenticationExtensionsLargeBlobInputsStaging;

@interface _WKAuthenticationExtensionsClientInputs : NSObject

@property (copy, nonatomic) NSString *appid;
@property (nonatomic) BOOL prf;
@property (copy, nonatomic) NSDictionary *evalByCredential;
@property (copy, nonatomic) id<_WKAuthenticationPRFInputValuesStaging> eval;
@property (copy, nonatomic) id<_WKAuthenticationExtensionsLargeBlobInputsStaging> largeBlob;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
