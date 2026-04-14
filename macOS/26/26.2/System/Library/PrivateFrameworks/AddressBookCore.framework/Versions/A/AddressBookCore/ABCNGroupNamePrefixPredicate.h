@class NSString;

@interface ABCNGroupNamePrefixPredicate : ABCNPredicate

@property (readonly, copy, nonatomic) NSString *prefix;

- (id)cn_coreDataPredicate;
- (void)dealloc;
- (id)initWithPrefix:(id)a0;

@end
