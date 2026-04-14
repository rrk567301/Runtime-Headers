@class IPAColorProfile, NSString, NSUUID, NSArray, NSError;
@protocol NUScalePolicy, DGDescriptionCompositionProvider, PFCanceler;

@interface PAImageRenderRequest : NSObject <NSCopying>

@property (retain) NSError *error;
@property (copy) NSString *name;
@property (retain) id<NUScalePolicy> scalePolicy;
@property (retain) IPAColorProfile *colorProfile;
@property (retain) id<PFCanceler> canceler;
@property BOOL bakeOrientation;
@property (retain) id<DGDescriptionCompositionProvider> compositionProvider;
@property (copy) NSUUID *adjustmentUUID;
@property (readonly) NSString *adjustmentIdentifier;
@property (copy) NSString *adjustmentKey;
@property (copy) NSArray *adjustmentValues;

+ (id)invalidRequestError:(id)a0;
+ (id)cancelRequestError;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)validate;
- (unsigned long long)numberOfImages;
- (BOOL)isCanceled;
- (unsigned long long)interactiveOperationIndex;
- (id)compositionForImageAtIndex:(unsigned long long)a0;
- (void)submit:(id)a0 handler:(id /* block */)a1;

@end
