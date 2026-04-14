@interface STRegulatoryManagerRevokeAccessData : NSObject

@property (nonatomic, readonly) BOOL isRevokeAccessModeEnabled;
@property (nonatomic, readonly) BOOL isParentSignInRequired;

- (id)init;
- (id)initWithIsRevokeAccessModeEnabled:(BOOL)a0 isParentSignInRequired:(BOOL)a1;

@end
