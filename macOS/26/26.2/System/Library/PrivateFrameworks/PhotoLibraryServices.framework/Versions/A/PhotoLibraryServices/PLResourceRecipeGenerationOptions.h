@class PAImageConversionServiceClient, NSString, PAVideoConversionServiceClient, PLDeferredPhotoFinalizer, NSDictionary;

@interface PLResourceRecipeGenerationOptions : NSObject

@property (readonly, nonatomic) unsigned int version;
@property (readonly, copy, nonatomic) NSString *taskIdentifier;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) PAImageConversionServiceClient *imageConversionServiceClient;
@property (readonly, nonatomic) PAVideoConversionServiceClient *videoConversionServiceClient;
@property (readonly, nonatomic) PLDeferredPhotoFinalizer *deferredPhotoFinalizer;
@property (readonly, nonatomic) NSDictionary *conversionServiceOptions;
@property (readonly, nonatomic) BOOL networkAccessAllowed;
@property (readonly, copy, nonatomic) NSString *clientBundleID;

- (void).cxx_destruct;
- (id)initWithVersion:(unsigned int)a0 taskIdentifier:(id)a1 reason:(id)a2 networkAccessAllowed:(BOOL)a3 clientBundleID:(id)a4;
- (id)initWithVersion:(unsigned int)a0 taskIdentifier:(id)a1 reason:(id)a2;
- (id)initWithVersion:(unsigned int)a0 taskIdentifier:(id)a1 reason:(id)a2 clientBundleID:(id)a3 deferredPhotoFinalizer:(id)a4;
- (id)initWithVersion:(unsigned int)a0 taskIdentifier:(id)a1 reason:(id)a2 imageConversionServiceClient:(id)a3 videoConversionServiceClient:(id)a4 conversionServiceOptions:(id)a5;
- (id)initWithVersion:(unsigned int)a0 taskIdentifier:(id)a1 reason:(id)a2 imageConversionServiceClient:(id)a3 videoConversionServiceClient:(id)a4 conversionServiceOptions:(id)a5 deferredPhotoFinalizer:(id)a6 clientBundleID:(id)a7;

@end
