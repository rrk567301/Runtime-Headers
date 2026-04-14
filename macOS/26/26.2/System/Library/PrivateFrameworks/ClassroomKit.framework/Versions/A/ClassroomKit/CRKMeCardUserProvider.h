@class CRKUser, NSString;
@protocol CRKCancelable, CRKContactsPrimitives;

@interface CRKMeCardUserProvider : NSObject <CRKUserProviding>

@property (readonly, nonatomic) id<CRKContactsPrimitives> contactsPrimitives;
@property (retain, nonatomic) id<CRKCancelable> contactsSubscription;
@property (copy, nonatomic) CRKUser *user;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)beginObservingContacts;
- (id)fetchCurrentUser;
- (id)initWithContactsPrimitives:(id)a0;
- (void)rebuildUser;
- (void)rebuildUserDebounced;

@end
