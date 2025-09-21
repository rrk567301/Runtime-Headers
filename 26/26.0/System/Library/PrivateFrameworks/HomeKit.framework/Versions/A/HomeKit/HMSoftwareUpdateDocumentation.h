@class HMHTMLDocument, HMPlainTextDocument, NSNumber;

@interface HMSoftwareUpdateDocumentation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) HMHTMLDocument *releaseNotesSummary;
@property (readonly, copy) HMHTMLDocument *releaseNotes;
@property (readonly, copy) HMPlainTextDocument *textReleaseNotes;
@property (readonly, copy) HMHTMLDocument *licenseAgreement;
@property (readonly, copy) NSNumber *licenseAgreementVersion;

+ (id)localizationsForBundle:(id)a0;

- (id)debugDescription;
- (id)initWithBundle:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReleaseNotesSummary:(id)a0 releaseNotes:(id)a1 textReleaseNotes:(id)a2 licenseAgreement:(id)a3 licenseAgreementVersion:(id)a4;

@end
