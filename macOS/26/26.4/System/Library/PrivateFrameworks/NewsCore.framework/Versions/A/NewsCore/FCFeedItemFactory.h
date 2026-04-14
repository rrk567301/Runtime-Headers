@class FCArticleRecordSource, NSString, NSArray;

@interface FCFeedItemFactory : NSObject <FCFeedItemFactoryType>

@property (readonly, nonatomic) FCArticleRecordSource *articleRecordSource;
@property (readonly, copy, nonatomic) NSString *storefrontID;
@property (readonly, nonatomic) NSArray *requiredArticleKeys;

- (void).cxx_destruct;
- (id)feedItemFromCKRecord:(id)a0 surfacedBy:(id)a1 error:(id *)a2;
- (id)feedItemFromPBRecord:(id)a0 surfacedBy:(id)a1 error:(id *)a2;
- (id)initWithArticleRecordSource:(id)a0 storefrontID:(id)a1;

@end
