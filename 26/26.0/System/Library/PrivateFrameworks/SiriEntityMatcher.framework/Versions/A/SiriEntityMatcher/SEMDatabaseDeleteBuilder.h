@class NSArray;

@interface SEMDatabaseDeleteBuilder : SEMDatabaseCommandBuilder {
    NSArray *_returningColumns;
}

- (id)build;
- (void).cxx_destruct;
- (void)setCommandCriterion:(id)a0;
- (void)setReturningColumns:(id)a0;

@end
