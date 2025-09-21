@class NSURL;

@interface MISLaunchWarningQueryResult : NSObject

@property (readonly, nonatomic) long long warningState;
@property (readonly, nonatomic) char isUserOverridden;
@property (readonly, nonatomic) NSURL *kbURL;

- (void).cxx_destruct;
- (id)initWithWarningState:(long long)a0 withUserOverridden:(char)a1 withKBURL:(id)a2;

@end
