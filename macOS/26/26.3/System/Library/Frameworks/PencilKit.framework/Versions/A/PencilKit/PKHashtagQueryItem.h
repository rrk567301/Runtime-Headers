@class NSString, CHPrefixQueryItem;

@interface PKHashtagQueryItem : PKDetectionQueryItem

@property (retain, nonatomic) CHPrefixQueryItem *coreHandwritingPrefixQueryItem;
@property (copy, nonatomic) NSString *hashtagResult;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)strokeIdentifiers;
- (id)initWithCoreHandwritingPrefixQueryItem:(id)a0;

@end
