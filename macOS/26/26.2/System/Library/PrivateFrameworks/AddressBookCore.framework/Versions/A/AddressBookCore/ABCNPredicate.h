@class NSPredicate;

@interface ABCNPredicate : NSPredicate <NSCopying> {
    NSPredicate *_abcn_predicate;
}

- (id)predicateFormat;
- (id)initWithPredicate:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (BOOL)evaluateWithObject:(id)a0;
- (id)cn_coreDataPredicate;
- (id)init;
- (void)dealloc;
- (id)cn_predicate;

@end
