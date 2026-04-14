@class IPAColorProfile, NSString, PACompositionEditController, NSUUID, NSError, NSArray;
@protocol NUScalePolicy, PFCanceler;

@interface PAImageRenderRequest : NSObject <NSCopying>

@property (retain) NSError *error;
@property (copy) NSString *name;
@property (retain) id<NUScalePolicy> scalePolicy;
@property (retain) IPAColorProfile *colorProfile;
@property (retain) id<PFCanceler> canceler;
@property BOOL bakeOrientation;
@property (retain) PACompositionEditController *compositionProvider;
@property (copy) NSUUID *adjustmentUUID;
@property (readonly) NSString *adjustmentIdentifier;
@property (copy) NSString *adjustmentKey;
@property (copy) NSArray *adjustmentValues;

+ (id)invalidRequestError:(id)a0;
+ (id)cancelRequestError;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)validate;
- (unsigned long long)numberOfImages;
- (BOOL)isCanceled;
- (id)compositionForImageAtIndex:(unsigned long long)a0;
- (unsigned long long)interactiveOperationIndex;
- (void)submit:(id)a0 handler:(id /* block */)a1;

@end
