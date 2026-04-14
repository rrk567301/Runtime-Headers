@class NSString, CHPrefixQueryItem;

@interface PKMentionQueryItem : PKDetectionQueryItem

@property (retain, nonatomic) CHPrefixQueryItem *coreHandwritingPrefixQueryItem;
@property (copy, nonatomic) NSString *mentionResult;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)strokeIdentifiers;
- (id)baselinePath;
- (id)initWithCoreHandwritingPrefixQueryItem:(id)a0;

@end
