@interface RemoteUser : User

+ (id)remoteUsersAtAddress:(id)a0 name:(id)a1 password:(id)a2 port:(long long)a3;

- (BOOL)isAdministrator;
- (BOOL)isLocal;
- (id)initWithInfo:(id)a0 node:(id)a1 attributes:(id)a2;

@end
