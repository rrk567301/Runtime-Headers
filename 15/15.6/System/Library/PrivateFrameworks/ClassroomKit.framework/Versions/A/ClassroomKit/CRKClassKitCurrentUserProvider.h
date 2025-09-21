@class NSObject;
@protocol CRKClassKitFacade, CRKCancelable, CRKClassKitCurrentUser;

@interface CRKClassKitCurrentUserProvider : NSObject

@property (readonly, nonatomic) NSObject<CRKClassKitFacade> *classKitFacade;
@property (retain, nonatomic) id<CRKClassKitCurrentUser> currentUser;
@property (nonatomic) char currentUserFetched;
@property (retain, nonatomic) id<CRKCancelable> currentUserSubscription;
@property (nonatomic) unsigned long long sequenceNumber;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithClassKitFacade:(id)a0;
- (char)isSafeToTalkToProgressdWithAccountState:(long long)a0;
- (void)performKVOUpdateForKeyPaths:(id)a0 updateBlock:(id /* block */)a1;
- (void)safeFetchCurrentUserWithCompletion:(id /* block */)a0;
- (void)startObservingCurrentUser;
- (void)stopObservingCurrentUser;
- (void)updateCurrentUser;
- (void)updateCurrentUser:(id)a0 fetched:(char)a1;

@end
