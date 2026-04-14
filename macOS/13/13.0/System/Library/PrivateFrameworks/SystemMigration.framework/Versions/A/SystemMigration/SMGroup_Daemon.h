@class SMDBEntry;

@interface SMGroup_Daemon : SMGroup

@property (retain) SMDBEntry *backing;

+ (BOOL)remoteGroupShouldOverwriteLocal:(id)a0;

- (id)name;
- (void).cxx_destruct;
- (id)groupID;
- (id)users;
- (id)groupMembers;
- (unsigned int)gid;
- (id)generatedUID;
- (id)entriesForKey:(id)a0;
- (id)_getEntry:(id)a0 atIndex:(int)a1;
- (id)groupMembership;
- (id)nestedGroups;
- (id)_initWithEntry:(id)a0;

@end
