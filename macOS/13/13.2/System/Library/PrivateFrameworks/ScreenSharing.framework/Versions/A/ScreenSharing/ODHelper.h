@class ODNode, ODRecord;

@interface ODHelper : NSObject

@property (retain) ODNode *searchNode;
@property (retain) ODNode *localNode;
@property (retain) ODNode *directoryNode;
@property (retain) ODRecord *groupRecord;

- (void)dealloc;
- (void)cleanup;
- (id)openSearchNode;
- (id)openLocalNode;
- (id)openDirectoryNodeWithName:(id)a0;
- (BOOL)nodeIsLocal:(id)a0;
- (id)unreachableSubnodes;
- (BOOL)authenticateWithUser:(id)a0 password:(id)a1 error:(id *)a2;
- (id)computerLists;
- (id)computersInList:(id)a0;
- (id)guestComputer;
- (id)localComputer;
- (id)computerListForComputer:(id)a0;
- (id)retrieveRecordOfType:(id)a0 name:(id)a1;
- (void)retrieveGroupRecord:(id)a0;
- (id)contentsOfGroup:(id)a0;
- (id)recordForAttributeType:(id)a0 queryValue:(id)a1 possibleTypes:(id)a2;
- (id)recordForGUID:(id)a0 possibleTypes:(id)a1;
- (id)recordForName:(id)a0 possibleTypes:(id)a1;
- (id)recordForUID:(unsigned int)a0;
- (id)groupMembersWithDetails:(id)a0;
- (id)localUserHomeDirectoryPaths;
- (id)prunedUserHomeList:(id)a0;

@end
