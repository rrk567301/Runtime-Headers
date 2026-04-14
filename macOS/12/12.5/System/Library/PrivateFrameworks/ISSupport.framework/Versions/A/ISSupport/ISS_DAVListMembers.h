@interface ISS_DAVListMembers : ISS_DAVRequest {
    BOOL showHidden;
}

+ (id)listMembersRequestWithURL:(id)a0 showHidden:(BOOL)a1;
+ (id)listMembersRequestWithSession:(id)a0 path:(id)a1 showHidden:(BOOL)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)members;
- (void)finalizeOperation;
- (id)initListMembersWithURL:(id)a0 showHidden:(BOOL)a1;
- (id)initListMembersWithSession:(id)a0 path:(id)a1 showHidden:(BOOL)a2;

@end
