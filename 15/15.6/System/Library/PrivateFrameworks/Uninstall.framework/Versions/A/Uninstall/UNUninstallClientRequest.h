@class NSUUID, NSArray;

@interface UNUninstallClientRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSUUID *requestID;
@property (readonly, nonatomic) NSArray *bundleURLs;
@property (readonly, nonatomic) char preserveApplicationUserData;
@property (readonly, nonatomic) char forceQuitForegroundApps;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleURL:(id)a0;
- (id)initWithBundleURLs:(id)a0;
- (id)initWithBundleURLs:(id)a0 preserveApplicationUserData:(char)a1 forceQuitForegroundApps:(char)a2;

@end
