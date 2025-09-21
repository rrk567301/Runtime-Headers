@class NSPredicate;

@interface WFHarnessActionSelector : NSObject

@property (class, readonly, nonatomic) WFHarnessActionSelector *matchAll;

@property (readonly, nonatomic) NSPredicate *predicate;

- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0;
- (char)matchesContext:(id)a0;

@end
