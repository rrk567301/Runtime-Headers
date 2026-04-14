@class NSPredicate;

@interface ABCNPredicate : NSPredicate <NSCopying> {
    NSPredicate *_abcn_predicate;
}

- (id)initWithPredicate:(id)a0;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)predicateFormat;
- (id)init;
- (BOOL)evaluateWithObject:(id)a0;
- (void)dealloc;
- (id)cn_coreDataPredicate;
- (id)cn_predicate;

@end
