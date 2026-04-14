@class CKEntitlements, NSString;

@interface CKProcessInfo : NSProcessInfo <CKProcessInfo>

@property (class, readonly) CKProcessInfo *processInfo;

@property (readonly) unsigned long long sessionType;
@property (readonly, copy) CKEntitlements *entitlements;
@property (readonly) BOOL useDebugServices;
@property (readonly) BOOL testingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
