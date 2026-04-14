@class NSString;

@interface ABCNGroupNamePrefixPredicate : ABCNPredicate

@property (readonly, copy, nonatomic) NSString *prefix;

- (id)initWithPrefix:(id)a0;
- (id)cn_coreDataPredicate;
- (void)dealloc;

@end
