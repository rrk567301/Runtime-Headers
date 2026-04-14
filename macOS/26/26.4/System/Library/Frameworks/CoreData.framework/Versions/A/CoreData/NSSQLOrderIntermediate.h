@class NSArray;

@interface NSSQLOrderIntermediate : NSSQLIntermediate {
    NSArray *_sortDescriptors;
}

- (id)initWithSortDescriptors:(id)a0 inScope:(id)a1;
- (id)generateSQLStringInContext:(id)a0;
- (void)dealloc;

@end
