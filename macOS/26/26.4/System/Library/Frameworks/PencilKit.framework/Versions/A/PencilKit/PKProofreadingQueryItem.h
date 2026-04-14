@class NSArray, CHTextCheckingQueryItem;

@interface PKProofreadingQueryItem : PKDetectionQueryItem

@property (retain, nonatomic) CHTextCheckingQueryItem *coreHandwritingTextCheckingQueryItem;
@property (readonly, nonatomic) NSArray *replacementStrings;
@property (readonly, nonatomic) int resultType;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)strokeIdentifiers;
- (id)baselinePath;
- (id)initWithCoreHandwritingTextCheckingQueryItem:(id)a0;

@end
