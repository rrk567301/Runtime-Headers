@class HMHTMLDocument, HMPlainTextDocument, NSNumber;

@interface HMSoftwareUpdateDocumentation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) HMHTMLDocument *releaseNotesSummary;
@property (readonly, copy) HMHTMLDocument *releaseNotes;
@property (readonly, copy) HMPlainTextDocument *textReleaseNotes;
@property (readonly, copy) HMHTMLDocument *licenseAgreement;
@property (readonly, copy) NSNumber *licenseAgreementVersion;

+ (id)localizationsForBundle:(id)a0;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundle:(id)a0;
- (id)initWithReleaseNotesSummary:(id)a0 releaseNotes:(id)a1 textReleaseNotes:(id)a2 licenseAgreement:(id)a3 licenseAgreementVersion:(id)a4;

@end
