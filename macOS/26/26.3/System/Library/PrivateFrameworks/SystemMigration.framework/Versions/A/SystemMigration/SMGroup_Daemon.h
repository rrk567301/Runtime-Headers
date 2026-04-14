@class SMDBEntry;

@interface SMGroup_Daemon : SMGroup

@property (retain) SMDBEntry *backing;

+ (BOOL)remoteGroupShouldOverwriteLocal:(id)a0;

- (id)groupID;
- (unsigned int)gid;
- (id)name;
- (void).cxx_destruct;
- (id)groupMembers;
- (id)entriesForKey:(id)a0;
- (id)users;
- (id)generatedUID;
- (id)nestedGroups;
- (id)groupMembership;
- (id)_initWithEntry:(id)a0;
- (id)_getEntry:(id)a0 atIndex:(int)a1;

@end
