@class NSArray, NSURLRequest;
@protocol GKImageRequestDelegate, GKResourceDataConsumer;

@interface GKImageRequest : GKResourceRequest

@property (class, copy, nonatomic) NSArray *searchBundles;

@property (readonly, nonatomic) id<GKResourceDataConsumer> dataConsumer;
@property (readonly, copy, nonatomic) NSURLRequest *urlRequest;
@property (readonly, nonatomic) char isResourceRequest;
@property (readonly, weak, nonatomic) id<GKImageRequestDelegate> delegate;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)cacheOptions;
- (void)didLoadResource:(id)a0 error:(id)a1;
- (id)makeLoadOperation;
- (id)initWithURLRequest:(id)a0 dataConsumer:(id)a1 delegate:(id)a2;
- (char)isAvatarImageRequest;
- (char)isContactImageRequest;
- (char)isSystemImageRequest;

@end
