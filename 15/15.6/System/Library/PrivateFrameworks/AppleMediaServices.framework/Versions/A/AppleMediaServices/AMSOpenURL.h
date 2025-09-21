@class NSURL, NSMutableSet, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSOpenURL : NSObject

@property (retain) NSMutableSet *attemptedTargets;
@property (readonly) NSURL *URL;
@property (retain) AMSProcessInfo *clientInfo;
@property (retain) id<AMSBagProtocol> bag;

+ (id)_modifiedURLFromURL:(id)a0 bundleInfo:(id)a1;
+ (char)_openURL:(id)a0 inApp:(id)a1;
+ (unsigned long long)_openModeForStandardURL:(id)a0 inApp:(id)a1 withLinks:(id)a2;
+ (char)_openURLWithLaunchServices:(id)a0;
+ (char)_shouldOpenStandardURL:(id)a0 inApp:(id)a1 withLinks:(id)a2;
+ (char)openStandardURL:(id)a0;
+ (void)openURL:(id)a0 account:(id)a1 preferredClient:(id)a2;
+ (id)openURL:(id)a0 clientInfo:(id)a1 bag:(id)a2;

- (void).cxx_destruct;
- (char)_shouldOpenURL:(id)a0;
- (char)_openURL:(id)a0 bundleInfo:(id)a1;
- (id)_performOpen;
- (id)initWithURL:(id)a0 clientInfo:(id)a1 bag:(id)a2;

@end
