@class NSString, NSURL, FCAssetHandle;

@interface FCWebContent : NSObject

@property (copy, nonatomic) NSString *articleID;
@property (retain, nonatomic) NSURL *sourceURL;
@property (retain, nonatomic) FCAssetHandle *excerptAssetHandle;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSURL *baseURL;

- (void).cxx_destruct;
- (id)init;
- (id)initWithArticleID:(id)a0 sourceURL:(id)a1 excerptAssetHandle:(id)a2;

@end
