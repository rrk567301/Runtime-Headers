@class NSArray, NSMutableArray;

@interface MBClipsLoader : NSObject

@property (retain) NSMutableArray *clips;
@property (nonatomic) BOOL showOnlyFavorites;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (retain) NSArray *previousClips;

- (void)load;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithShowOnlyFavorites:(BOOL)a0;

@end
