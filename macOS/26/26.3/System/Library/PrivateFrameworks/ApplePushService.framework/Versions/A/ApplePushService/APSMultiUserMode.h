@interface APSMultiUserMode : NSObject

@property (readonly, nonatomic) BOOL isMultiUser;
@property (readonly, nonatomic) BOOL isLoggedInUser;

+ (id)sharedInstance;
+ (BOOL)_getMultiUserMode;
+ (BOOL)_getIsCurrentlyLoggedIn;

- (BOOL)isMultiAndLoggedIn;
- (id)initWithIsMultiUserMode:(BOOL)a0 loggedInUser:(BOOL)a1;

@end
