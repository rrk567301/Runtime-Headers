@class NSPredicate;

@interface ABCNPredicate : NSPredicate <NSCopying> {
    NSPredicate *_abcn_predicate;
}

- (id)predicateFormat;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)init;
- (id)cn_coreDataPredicate;
- (BOOL)evaluateWithObject:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPredicate:(id)a0;
- (id)cn_predicate;

@end
