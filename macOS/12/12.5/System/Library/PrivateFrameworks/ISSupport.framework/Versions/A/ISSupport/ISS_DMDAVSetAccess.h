@class NSDictionary, NSString, ISS_DAVSession;

@interface ISS_DMDAVSetAccess : ISS_DAVRequest {
    NSDictionary *_access;
    NSString *_path;
    ISS_DAVSession *_davSession;
}

+ (id)setAccess:(id)a0 atPath:(id)a1 withSession:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)dispatch;
- (id)initWithAccess:(id)a0 path:(id)a1 session:(id)a2;
- (id)_acesForAccessDict:(id)a0 forPrincipal:(id)a1;
- (id)_newACLBodyForDictionary:(id)a0;

@end
