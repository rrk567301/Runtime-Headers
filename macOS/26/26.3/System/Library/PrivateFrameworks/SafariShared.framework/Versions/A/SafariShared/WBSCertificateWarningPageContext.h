@class NSURL, NSString;

@interface WBSCertificateWarningPageContext : NSObject {
    NSString *_expiredCertificateDescription;
}

@property (readonly, nonatomic) NSURL *failingURL;
@property (readonly, nonatomic) long long warningCategory;
@property (readonly, nonatomic) BOOL canGoBack;
@property (readonly, nonatomic) long long numberOfDaysInvalid;
@property (readonly, nonatomic) NSString *expiredCerticateDescription;
@property (readonly, nonatomic) double clockSkew;

+ (BOOL)certificateWarningCannotBeBypassedForTrust:(struct __SecTrust { } *)a0;
+ (long long)certificateWarningCategoryForError:(id)a0 trustIncludesRevokedCertificate:(BOOL)a1 clockSkew:(double)a2;
+ (long long)numberOfDaysBetweenCertificateValidityRangeAndNow:(id)a0;
+ (id)permanentAcceptanceConfirmationButtonTitle;
+ (id)permanentAcceptanceConfirmationTitle;

- (id)init;
- (void).cxx_destruct;
- (id)generateHTMLFromDataAtURL:(id)a0 withBypassFeatureButtonText:(id)a1 usingRTL:(BOOL)a2;
- (id)_bypassFeatureTitleText;
- (id)_bypassFeatureWarningText;
- (id)_pageLoadedJSUsingRTL:(BOOL)a0;
- (id)_sanitizedJavaScriptStringContentFromString:(id)a0;
- (id)initLegacyTLSWarningWithFailingURL:(id)a0 canGoBack:(BOOL)a1;
- (id)initPrivateRelayFailClosedNavigationWarningWithFailingURL:(id)a0 isPrivateRelaySetToTrackersAndWebsites:(BOOL)a1 canGoBack:(BOOL)a2;
- (id)initWithWarningCategory:(long long)a0 failingURL:(id)a1 numberOfDaysInvalid:(long long)a2 canGoBack:(BOOL)a3 clockSkew:(double)a4;

@end
