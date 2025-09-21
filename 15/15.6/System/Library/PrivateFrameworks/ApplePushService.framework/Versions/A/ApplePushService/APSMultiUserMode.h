@interface APSMultiUserMode : NSObject

@property (readonly, nonatomic) char isMultiUser;
@property (readonly, nonatomic) char isLoggedInUser;

+ (id)sharedInstance;
+ (char)_getIsCurrentlyLoggedIn;
+ (char)_getMultiUserMode;

- (id)initWithIsMultiUserMode:(char)a0 loggedInUser:(char)a1;
- (char)isMultiAndLoggedIn;

@end
