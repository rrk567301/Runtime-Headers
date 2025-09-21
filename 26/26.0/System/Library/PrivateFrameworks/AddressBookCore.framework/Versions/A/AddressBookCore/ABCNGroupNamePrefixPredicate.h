@class NSString;

@interface ABCNGroupNamePrefixPredicate : ABCNPredicate

@property (readonly, copy, nonatomic) NSString *prefix;

- (void)dealloc;
- (id)cn_coreDataPredicate;
- (id)initWithPrefix:(id)a0;

@end
