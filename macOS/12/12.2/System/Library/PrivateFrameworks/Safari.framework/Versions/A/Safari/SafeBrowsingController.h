@interface SafeBrowsingController : NSObject

@property (class, nonatomic, getter=isSafeBrowsingEnabled) BOOL safeBrowsingEnabled;

+ (void)_startObservingSafeBrowsingStateIfNeeded;
+ (void)_updateWebViewPreferences:(BOOL)a0;
+ (id)_safeBrowsingPreferencesPlistURL;

@end
