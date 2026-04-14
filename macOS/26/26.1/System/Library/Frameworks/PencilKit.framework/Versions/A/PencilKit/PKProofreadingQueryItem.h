@class NSArray, CHTextCheckingQueryItem;

@interface PKProofreadingQueryItem : PKDetectionQueryItem

@property (retain, nonatomic) CHTextCheckingQueryItem *coreHandwritingTextCheckingQueryItem;
@property (readonly, nonatomic) NSArray *replacementStrings;
@property (readonly, nonatomic) int resultType;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)strokeIdentifiers;
- (id)baselinePath;
- (id)initWithCoreHandwritingTextCheckingQueryItem:(id)a0;

@end
