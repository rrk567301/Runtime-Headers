@class NSString;

@interface ABCNGroupNamePrefixPredicate : ABCNPredicate

@property (readonly, copy, nonatomic) NSString *prefix;

- (id)initWithPrefix:(id)a0;
- (void)dealloc;
- (id)cn_coreDataPredicate;

@end
