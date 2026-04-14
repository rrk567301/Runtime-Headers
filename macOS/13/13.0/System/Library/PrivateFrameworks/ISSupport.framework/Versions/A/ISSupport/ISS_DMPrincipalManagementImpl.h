@class ISS_MMiDiskSession;

@interface ISS_DMPrincipalManagementImpl : NSObject <DMPrincipalManagement> {
    ISS_MMiDiskSession *_iDiskSession;
}

- (id)removeGroup:(id)a0;
- (id)removeSecondaryUserNamed:(id)a0;
- (id)resetPassword:(id)a0 forSecondaryUserNamed:(id)a1;
- (id)initWithIDiskSession:(id)a0;
- (id)createSecondaryUserNamed:(id)a0 withPassword:(id)a1;
- (id)lookupPasswordForSecondaryUserNamed:(id)a0;
- (id)listSecondaryUsersForAccountNamed:(id)a0;
- (id)allSecondaryUserInfo;
- (id)createGroup:(id)a0 withMembers:(id)a1;
- (id)addPrincipals:(id)a0 toGroup:(id)a1;
- (id)removePrincipals:(id)a0 fromGroup:(id)a1;
- (id)listMembers:(id)a0;
- (id)groupExists:(id)a0;
- (id)listGroupsForAccountNamed:(id)a0;
- (void)_setIDiskSession:(id)a0;
- (id)_createXMLDataForSecondaryCreate:(id)a0 andPassword:(id)a1;
- (id)_createXMLDataForSecondaryRemove:(id)a0;
- (id)_createXMLDataForSecondaryPasswordLookup:(id)a0;
- (id)_createXMLDataForAllSecondaryInfo;
- (id)_createXMLDataForSecondaryReset:(id)a0 withPassword:(id)a1;
- (id)_createXMLDataForSecondaryList:(id)a0;
- (id)_createXMLDataForGroupCreate:(id)a0 withMembers:(id)a1;
- (id)_createXMLDataForGroupRemove:(id)a0;
- (id)_createXMLDataForRemovePrincipals:(id)a0 fromGroup:(id)a1;
- (id)_createXMLDataForAddPrincipals:(id)a0 toGroup:(id)a1;
- (id)_createXMLDataForGroupExists:(id)a0;
- (id)_createXMLDataForListMembers:(id)a0;
- (id)_createXMLDataForGroupsForAccount:(id)a0;

@end
