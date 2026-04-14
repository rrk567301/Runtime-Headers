@protocol FCContentContext;

@interface FCRecipeDownloadService : NSObject <FCRecipeDownloadServiceType>

@property (readonly, nonatomic) id<FCContentContext> context;

- (id)initWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)fetchCachedRecipeWithID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isRecipeDownloadedEnoughToUse:(id)a0;

@end
