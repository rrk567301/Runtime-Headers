@class NSString, FCWebContent, FCANFContent;

@interface FCArticleContent : NSObject

@property (copy, nonatomic) NSString *articleID;
@property (nonatomic) unsigned long long contentType;
@property (retain, nonatomic) FCWebContent *webContent;
@property (retain, nonatomic) FCANFContent *anfContent;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithArticleID:(id)a0 anfContent:(id)a1;
- (id)initWithArticleID:(id)a0 contentType:(unsigned long long)a1;
- (id)initWithArticleID:(id)a0 webContent:(id)a1;
- (id)initWithContext:(id)a0 articleRecord:(id)a1;

@end
