@protocol FCContentContext;

@interface FCPuzzleDownloadService : NSObject <FCPuzzleDownloadServiceType>

@property (readonly, nonatomic) id<FCContentContext> context;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)fetchCachedPuzzleWithID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isPuzzleDownloadedEnoughToUse:(id)a0;

@end
