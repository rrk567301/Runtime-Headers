@class NSString, NSMutableArray;

@interface AVCaptureDeferredPhotoProcessingRequest : NSObject

@property (readonly) NSMutableArray *delegatesStorage;
@property (nonatomic) unsigned int firedCallbackFlags;
@property (readonly) NSMutableArray *photoProxies;
@property (nonatomic) int expectedPhotoCount;
@property (nonatomic) int firedPhotoCallbacksCount;
@property (copy, nonatomic) NSString *originalDeferredPhotoIdentifier;

- (void)dealloc;
- (id)description;
- (void)addDelegate:(id)a0;
- (void)addProxy:(id)a0;
- (id)initWithDelegate:(id)a0 photoProxy:(id)a1;

@end
