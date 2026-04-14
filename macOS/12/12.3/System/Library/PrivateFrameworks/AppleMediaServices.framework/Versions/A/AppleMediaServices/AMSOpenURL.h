@class NSURL, NSMutableSet, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSOpenURL : NSObject

@property (retain) NSMutableSet *attemptedTargets;
@property (readonly) NSURL *URL;
@property (retain) AMSProcessInfo *clientInfo;
@property (retain) id<AMSBagProtocol> bag;

+ (id)openURL:(id)a0 clientInfo:(id)a1 bag:(id)a2;
+ (BOOL)openStandardURL:(id)a0;
+ (unsigned long long)_openModeForStandardURL:(id)a0 inApp:(id)a1 withLinks:(id)a2;
+ (BOOL)_openURL:(id)a0 inApp:(id)a1;
+ (BOOL)_openURLWithLaunchServices:(id)a0;
+ (id)_modifiedURLFromURL:(id)a0 bundleInfo:(id)a1;
+ (BOOL)_shouldOpenStandardURL:(id)a0 inApp:(id)a1 withLinks:(id)a2;
+ (void)openURL:(id)a0 account:(id)a1 preferredClient:(id)a2;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 clientInfo:(id)a1 bag:(id)a2;
- (id)_performOpen;
- (BOOL)_openURL:(id)a0 bundleInfo:(id)a1;
- (BOOL)_shouldOpenURL:(id)a0;

@end
