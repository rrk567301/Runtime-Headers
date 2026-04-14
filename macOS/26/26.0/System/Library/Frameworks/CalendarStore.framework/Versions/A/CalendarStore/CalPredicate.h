@class NSPredicate;

@interface CalPredicate : NSCompoundPredicate {
    NSPredicate *_subpredicate;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPredicate:(id)a0;
- (id)predicate;
- (void).cxx_destruct;
- (void)setSubpredicate:(id)a0;
- (id)subpredicate;

@end
