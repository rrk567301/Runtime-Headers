@class NSArray;

@interface NSSQLOrderIntermediate : NSSQLIntermediate {
    NSArray *_sortDescriptors;
}

- (id)generateSQLStringInContext:(id)a0;
- (id)initWithSortDescriptors:(id)a0 inScope:(id)a1;
- (void)dealloc;

@end
