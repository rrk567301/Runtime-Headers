@class NSPredicate;

@interface ABCNPredicate : NSPredicate <NSCopying> {
    NSPredicate *_abcn_predicate;
}

- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)predicateFormat;
- (id)cn_coreDataPredicate;
- (id)initWithPredicate:(id)a0;
- (void)dealloc;
- (BOOL)evaluateWithObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)cn_predicate;

@end
