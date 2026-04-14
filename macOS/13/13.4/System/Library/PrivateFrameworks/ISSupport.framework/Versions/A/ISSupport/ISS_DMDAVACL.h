@class NSString, NSArray;

@interface ISS_DMDAVACL : ISS_DAVRequest {
    NSString *_path;
    NSArray *_principals;
    NSArray *_accessRights;
}

+ (id)accessRightsRequest:(id)a0 withSession:(id)a1 toPath:(id)a2 forPrincipals:(id)a3;

- (void)dealloc;
- (void)dispatch;
- (id)_acesForAccess:(id)a0 forPrincipal:(id)a1;
- (id)_newACLBodyForDictionary:(id)a0;
- (id)init:(id)a0 withSession:(id)a1 toPath:(id)a2 forPrincipals:(id)a3;

@end
