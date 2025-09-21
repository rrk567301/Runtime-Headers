@class NSString;

@interface MobileCalDAVDelegateUserInfo : NSObject

@property (retain, nonatomic) NSString *principalPath;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *uid;
@property (nonatomic) char allowWrite;

+ (id)infoFromCalDAVDetails:(id)a0 allowWrite:(char)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPrincipalPath:(id)a0 displayName:(id)a1 allowWrite:(char)a2;

@end
