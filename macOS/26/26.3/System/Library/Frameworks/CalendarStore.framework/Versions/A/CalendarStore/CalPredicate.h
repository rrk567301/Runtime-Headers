@class NSPredicate;

@interface CalPredicate : NSCompoundPredicate {
    NSPredicate *_subpredicate;
}

- (id)predicate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPredicate:(id)a0;
- (void)setSubpredicate:(id)a0;
- (id)subpredicate;

@end
