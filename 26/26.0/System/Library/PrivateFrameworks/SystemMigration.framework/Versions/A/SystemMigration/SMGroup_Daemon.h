@class SMDBEntry;

@interface SMGroup_Daemon : SMGroup

@property (retain) SMDBEntry *backing;

+ (BOOL)remoteGroupShouldOverwriteLocal:(id)a0;

- (unsigned int)gid;
- (id)users;
- (id)name;
- (id)groupMembers;
- (id)groupID;
- (id)entriesForKey:(id)a0;
- (void).cxx_destruct;
- (id)generatedUID;
- (id)nestedGroups;
- (id)_initWithEntry:(id)a0;
- (id)groupMembership;
- (id)_getEntry:(id)a0 atIndex:(int)a1;

@end
