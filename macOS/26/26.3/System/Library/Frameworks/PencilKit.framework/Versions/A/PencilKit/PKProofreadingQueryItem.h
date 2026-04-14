@class NSArray, CHTextCheckingQueryItem;

@interface PKProofreadingQueryItem : PKDetectionQueryItem

@property (retain, nonatomic) CHTextCheckingQueryItem *coreHandwritingTextCheckingQueryItem;
@property (readonly, nonatomic) NSArray *replacementStrings;
@property (readonly, nonatomic) int resultType;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)strokeIdentifiers;
- (id)baselinePath;
- (id)initWithCoreHandwritingTextCheckingQueryItem:(id)a0;

@end
