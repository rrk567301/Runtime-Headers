@interface IMDAbstractDatabaseDowngrader : IMAbstractDatabaseArchiver

- (char)copyDatabase:(id /* block */)a0;
- (id)createDowngradeHelper;

@end
