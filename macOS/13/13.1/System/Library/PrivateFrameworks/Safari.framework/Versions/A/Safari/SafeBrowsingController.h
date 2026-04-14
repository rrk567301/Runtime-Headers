@interface SafeBrowsingController : NSObject

@property (class, nonatomic, getter=isSafeBrowsingEnabled) BOOL safeBrowsingEnabled;

+ (void)_startObservingSafeBrowsingStateIfNeeded;
+ (id)_safeBrowsingPreferencesPlistURL;
+ (void)_updateWebViewPreferences:(BOOL)a0;

@end
