@class SMDBEntry;

@interface SMGroup_Daemon : SMGroup

@property (retain) SMDBEntry *backing;

+ (BOOL)remoteGroupShouldOverwriteLocal:(id)a0;

- (id)users;
- (id)groupMembers;
- (id)groupID;
- (id)entriesForKey:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (unsigned int)gid;
- (id)generatedUID;
- (id)nestedGroups;
- (id)groupMembership;
- (id)_initWithEntry:(id)a0;
- (id)_getEntry:(id)a0 atIndex:(int)a1;

@end
