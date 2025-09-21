@class NSString;

@interface ImplicitlyAssumedIdentityEntitlement : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *impliedBundleID;
@property (readonly, nonatomic) char isWebBrowser;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 impliedBundleID:(id)a1 isWebBrowser:(char)a2;

@end
