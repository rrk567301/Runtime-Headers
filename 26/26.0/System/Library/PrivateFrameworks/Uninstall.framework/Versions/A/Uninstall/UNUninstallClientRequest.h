@class NSUUID, NSArray;

@interface UNUninstallClientRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *requestID;
@property (readonly, nonatomic) NSArray *bundleURLs;
@property (readonly, nonatomic) BOOL preserveApplicationUserData;
@property (readonly, nonatomic) BOOL forceQuitForegroundApps;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleURL:(id)a0;
- (id)initWithBundleURLs:(id)a0;
- (id)initWithBundleURLs:(id)a0 preserveApplicationUserData:(BOOL)a1 forceQuitForegroundApps:(BOOL)a2;

@end
