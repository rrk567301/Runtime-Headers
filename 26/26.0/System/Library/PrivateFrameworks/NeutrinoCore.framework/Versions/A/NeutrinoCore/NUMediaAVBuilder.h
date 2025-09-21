@class AVAsset, AVVideoComposition;
@protocol NUContainerMedia;

@interface NUMediaAVBuilder : NSObject

@property (readonly, nonatomic) id<NUContainerMedia> container;
@property (readonly, nonatomic) AVAsset *videoAsset;
@property (readonly, nonatomic) AVVideoComposition *videoComposition;

- (id)initWithContainer:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)buildAVObjectsWithOptions:(id)a0 error:(out id *)a1;

@end
