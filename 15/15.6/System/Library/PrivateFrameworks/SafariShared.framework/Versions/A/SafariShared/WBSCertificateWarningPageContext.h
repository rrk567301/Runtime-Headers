@class NSURL, NSString;

@interface WBSCertificateWarningPageContext : NSObject <NSSecureCoding> {
    NSString *_expiredCertificateDescription;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSURL *failingURL;
@property (readonly, nonatomic) long long warningCategory;
@property (readonly, nonatomic) char canGoBack;
@property (readonly, nonatomic) long long numberOfDaysInvalid;
@property (readonly, nonatomic) NSString *expiredCerticateDescription;
@property (readonly, nonatomic) double clockSkew;

+ (char)certificateWarningCannotBeBypassedForTrust:(struct __SecTrust { } *)a0;
+ (long long)certificateWarningCategoryForError:(id)a0 trustIncludesRevokedCertificate:(char)a1 clockSkew:(double)a2;
+ (long long)numberOfDaysBetweenCertificateValidityRangeAndNow:(id)a0;
+ (id)permanentAcceptanceConfirmationButtonTitle;
+ (id)permanentAcceptanceConfirmationTitle;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initLegacyTLSWarningWithFailingURL:(id)a0 canGoBack:(char)a1;
- (id)initPrivateRelayFailClosedNavigationWarningWithFailingURL:(id)a0 isPrivateRelaySetToTrackersAndWebsites:(char)a1 canGoBack:(char)a2;
- (id)initWithWarningCategory:(long long)a0 failingURL:(id)a1 numberOfDaysInvalid:(long long)a2 canGoBack:(char)a3 clockSkew:(double)a4;

@end
