@class NSArray;

@interface ABCNGroupIdentifiersPredicate : ABCNPredicate

@property (readonly, copy, nonatomic) NSArray *identifiers;

- (id)cn_coreDataPredicate;
- (void)dealloc;
- (id)initWithIdentifies:(id)a0;

@end
