@class NSString, NSObject, AdminDirectoryService;
@protocol OS_dispatch_semaphore;

@interface DSNode : NSObject {
    unsigned int mNodeReference;
    NSString *mNodeName;
    AdminDirectoryService *mDirectoryService;
    NSObject<OS_dispatch_semaphore> *mOpenCloseSemaphore;
}

+ (id)nodeWithName:(id)a0;
+ (id)openDefaultLocalNode;
+ (void)closeDefaultLocalNode;
+ (id)openProxyNodeAtAddress:(id)a0 name:(id)a1 password:(id)a2 port:(long long)a3;
+ (BOOL)nodeIsDefaultLocalNode:(unsigned int)a0;
+ (id)openSearchNode;
+ (BOOL)isConnectedToNetwork;

- (void)dealloc;
- (void)finalize;
- (BOOL)open;
- (void)close;
- (BOOL)isOpen;
- (id)nodeName;
- (void)deauthenticate;
- (id)_recordsFromBuffer:(struct { unsigned int x0; unsigned int x1; char x2[1]; } *)a0 count:(unsigned int)a1;
- (int)_authenticateNodeWithName:(id)a0 password:(id)a1 oldPassword:(id)a2 data:(id)a3 method:(const char *)a4 doAuthentication:(BOOL)a5;
- (id)_findUsersWithFullName:(struct { unsigned int x0; unsigned int x1; char x2[1]; } *)a0 attribute:(struct { unsigned int x0; struct *x1; } *)a1 expectedCount:(unsigned int)a2;
- (id)_findRecordsWithName:(struct { unsigned int x0; struct *x1; } *)a0 type:(struct { unsigned int x0; struct *x1; } *)a1 attribute:(struct { unsigned int x0; struct *x1; } *)a2 expectedCount:(unsigned int)a3;
- (id)_findRecordsByID:(long long)a0 type:(struct { unsigned int x0; struct *x1; } *)a1 attribute:(struct { unsigned int x0; unsigned int x1; char x2[1]; } *)a2 expectedCount:(unsigned int)a3;
- (id)initWithNodeName:(id)a0;
- (int)verifyUserName:(id)a0 password:(id)a1;
- (int)authenticateName:(id)a0 withPassword:(id)a1;
- (int)authenticateNodeWithAuthorization:(id)a0;
- (long long)setPassword:(id)a0 oldPassword:(id)a1 forUser:(id)a2;
- (BOOL)setPasswordScheme:(const char *)a0 forUser:(id)a1 password:(id)a2;
- (long long)setPasswordAsRoot:(id)a0 forUser:(id)a1;
- (BOOL)setHashedPassword:(id)a0 forUser:(id)a1;
- (id)hashedPasswordForUser:(id)a0;
- (BOOL)isNetInfoNode;
- (id)findUsersWithFullName:(struct { unsigned int x0; unsigned int x1; char x2[1]; } *)a0 attribute:(struct { unsigned int x0; struct *x1; } *)a1;
- (id)findUserWithFullName:(struct { unsigned int x0; unsigned int x1; char x2[1]; } *)a0 attribute:(struct { unsigned int x0; struct *x1; } *)a1;
- (id)findRecordsWithName:(struct { unsigned int x0; struct *x1; } *)a0 type:(struct { unsigned int x0; struct *x1; } *)a1 attribute:(struct { unsigned int x0; struct *x1; } *)a2;
- (id)findRecordWithName:(struct { unsigned int x0; struct *x1; } *)a0 type:(struct { unsigned int x0; struct *x1; } *)a1 attribute:(struct { unsigned int x0; struct *x1; } *)a2;
- (id)findRecordsByID:(long long)a0 type:(struct { unsigned int x0; struct *x1; } *)a1 attribute:(struct { unsigned int x0; unsigned int x1; char x2[1]; } *)a2;
- (id)findRecordByID:(long long)a0 type:(struct { unsigned int x0; struct *x1; } *)a1 attribute:(struct { unsigned int x0; unsigned int x1; char x2[1]; } *)a2;
- (unsigned int)dirNodeReference;
- (id)directoryService;
- (void)setDirectoryService:(id)a0;

@end
