@interface ISS_DAVListMembers : ISS_DAVRequest {
    BOOL showHidden;
}

+ (id)listMembersRequestWithSession:(id)a0 path:(id)a1 showHidden:(BOOL)a2;
+ (id)listMembersRequestWithURL:(id)a0 showHidden:(BOOL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)members;
- (void)finalizeOperation;
- (id)initListMembersWithSession:(id)a0 path:(id)a1 showHidden:(BOOL)a2;
- (id)initListMembersWithURL:(id)a0 showHidden:(BOOL)a1;

@end
