@class NSArray, NSMutableIndexSet;

@interface IMAPUIDSearchCommand : IMAPUIDCommand

@property (copy) NSArray *terms;
@property (retain) NSMutableIndexSet *matchingUIDs;

- (void).cxx_destruct;
- (id)activityString;
- (id)_newArgumentForSearchTerm:(id)a0 isLiteral:(BOOL *)a1;
- (id)commandTypeString;
- (id)debugCommandStringWithAccount:(id)a0;
- (BOOL)executeOnConnection:(id)a0;
- (id)initWithMailboxName:(id)a0 UIDs:(id)a1;
- (id)initWithMailboxName:(id)a0 range:(struct { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithMailboxName:(id)a0 range:(struct { unsigned long long x0; unsigned long long x1; })a1 terms:(id)a2;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;

@end
