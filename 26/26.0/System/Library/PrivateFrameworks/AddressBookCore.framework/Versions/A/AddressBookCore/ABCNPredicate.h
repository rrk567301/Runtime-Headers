@class NSPredicate;

@interface ABCNPredicate : NSPredicate <NSCopying> {
    NSPredicate *_abcn_predicate;
}

- (BOOL)evaluateWithObject:(id)a0;
- (void)dealloc;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)cn_coreDataPredicate;
- (id)initWithPredicate:(id)a0;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)cn_predicate;

@end
