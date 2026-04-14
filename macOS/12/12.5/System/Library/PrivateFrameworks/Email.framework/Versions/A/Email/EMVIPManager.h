@class NSSet, NSString, NSXPCInterface, EAEmailAddressSet, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface EMVIPManager : NSObject <EMVIPReader_Private, EMVIPManager> {
    NSMutableDictionary *_vipsByIdentifier;
    EAEmailAddressSet *_cachedEmailAddresses;
}

@property (class, readonly) NSXPCInterface *remoteInterface;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (readonly, copy, nonatomic) NSSet *allVIPWaitForResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *allVIPs;
@property (readonly, copy, nonatomic) EAEmailAddressSet *allVIPEmailAddresses;
@property (readonly, nonatomic) BOOL hasVIPs;

+ (id)plistURL;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRemoteConnection:(id)a0;
- (BOOL)isVIPAddress:(id)a0;
- (void)_loadVIPs;
- (id)_allVIPEmailAddresses;
- (id)_vipsDictionary;
- (void)getAllVIPsWithCompletion:(id /* block */)a0;
- (id)vipWithIdentifier:(id)a0;
- (void)saveVIPs:(id)a0;
- (void)removeVIPsWithIdentifiers:(id)a0;
- (void)removeVIPsWithEmailAddresses:(id)a0;

@end
