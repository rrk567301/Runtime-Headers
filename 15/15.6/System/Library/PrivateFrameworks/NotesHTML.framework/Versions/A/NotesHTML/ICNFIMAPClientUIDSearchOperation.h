@class NSArray, NSMutableIndexSet;

@interface ICNFIMAPClientUIDSearchOperation : ICNFIMAPClientUIDOperation

@property (copy) NSArray *terms;
@property (retain) NSMutableIndexSet *matchingUIDs;

- (void).cxx_destruct;
- (id)activityString;
- (id)commandTypeString;
- (char)executeOnConnection:(id)a0;
- (id)initWithMailboxName:(id)a0 UIDs:(id)a1;
- (id)initWithMailboxName:(id)a0 range:(struct { unsigned long long x0; unsigned long long x1; })a1;
- (id)newCommandDataForLiteralPlus:(char)a0;
- (id)_newArgumentForSearchTerm:(id)a0 isLiteral:(char *)a1;
- (id)debugCommandString;
- (id)initWithMailboxName:(id)a0 range:(struct { unsigned long long x0; unsigned long long x1; })a1 terms:(id)a2;

@end
