@interface ISS_DMDAVListMembers : ISS_DAVListMembers

+ (id)listMembersRequestWithSession:(id)a0 URI:(id)a1 showHidden:(BOOL)a2;

- (void)finalizeOperation;
- (id)initListMembersWithSession:(id)a0 URI:(id)a1 showHidden:(BOOL)a2;

@end
