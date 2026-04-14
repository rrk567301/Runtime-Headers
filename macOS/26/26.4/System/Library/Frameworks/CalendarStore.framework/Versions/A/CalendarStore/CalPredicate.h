@class NSPredicate;

@interface CalPredicate : NSCompoundPredicate {
    NSPredicate *_subpredicate;
}

- (id)initWithPredicate:(id)a0;
- (id)predicate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setSubpredicate:(id)a0;
- (id)subpredicate;

@end
