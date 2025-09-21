@interface SafeBrowsingController : NSObject

@property (class, nonatomic, getter=isSafeBrowsingEnabled) char safeBrowsingEnabled;

+ (id)_safeBrowsingPreferencesPlistURL;
+ (void)_startObservingSafeBrowsingStateIfNeeded;
+ (void)_updateWebViewPreferences:(char)a0;

@end
