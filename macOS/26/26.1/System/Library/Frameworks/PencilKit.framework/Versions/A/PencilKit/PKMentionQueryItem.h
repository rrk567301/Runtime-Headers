@class NSString, CHPrefixQueryItem;

@interface PKMentionQueryItem : PKDetectionQueryItem

@property (retain, nonatomic) CHPrefixQueryItem *coreHandwritingPrefixQueryItem;
@property (copy, nonatomic) NSString *mentionResult;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)strokeIdentifiers;
- (id)baselinePath;
- (id)initWithCoreHandwritingPrefixQueryItem:(id)a0;

@end
