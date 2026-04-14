@class ICUserIdentity, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface _MPCPrivateListeningStateUserIdentitySource : MPCPrivateListeningStateSource {
    ICUserIdentity *_userIdentity;
    NSNumber *_cachedValue;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedAccessQueue;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)currentValue;
- (id)_initWithUserIdentity:(id)a0;
- (long long)sourceType;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)a0;
- (void)_handleHomeUserPrivateListeningDidChangeNotification:(id)a0;
- (void)_loadCurrentValueFromIdentityProperties;

@end
