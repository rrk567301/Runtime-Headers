@class NSFileAccessClaim, NSString;

@interface _NSFileAccessClaimPresenterRelinquishment : NSObject {
    NSFileAccessClaim *_claim;
    id _presenterID;
    NSString *_blockageReason;
    id /* block */ _relinquisher;
}

- (void)dealloc;
- (void)abandon;
- (void)blockClaimForPresenterAt:(const char *)a0;
- (id)initWithClaim:(id)a0 presenterID:(id)a1 relinquisher:(id /* block */)a2;
- (void)performRelinquish;

@end
