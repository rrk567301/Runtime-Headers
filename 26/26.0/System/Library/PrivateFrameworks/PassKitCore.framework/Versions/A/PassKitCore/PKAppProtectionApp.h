@class NSString;

@interface PKAppProtectionApp : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) BOOL isAppAvailable;

- (void).cxx_destruct;
- (id)initWithAppType:(unsigned long long)a0;

@end
