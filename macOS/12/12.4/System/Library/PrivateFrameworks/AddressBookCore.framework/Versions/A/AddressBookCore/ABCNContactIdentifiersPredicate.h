@class NSArray;

@interface ABCNContactIdentifiersPredicate : ABCNPredicate

@property (readonly, copy, nonatomic) NSArray *identifiers;

- (void)dealloc;
- (id)initWithIdentifies:(id)a0;
- (id)cn_coreDataPredicate;

@end
