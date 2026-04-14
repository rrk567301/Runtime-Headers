@class NSPredicate;

@interface CalPredicate : NSCompoundPredicate {
    NSPredicate *_subpredicate;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)predicate;
- (id)initWithPredicate:(id)a0;
- (id)subpredicate;

@end
