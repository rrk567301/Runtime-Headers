@interface AMPDeviceAccessibilityPrefs : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char closedCaptionsSupported;
@property (nonatomic) char isUnsupportedLanguage;
@property (nonatomic) char invertColorsSupported;
@property (nonatomic) char enableVoiceOver;
@property (nonatomic) char enableZoom;
@property (nonatomic) char invertDisplay;
@property (nonatomic) char speakAutofillText;
@property (nonatomic) char useMonoAudio;
@property (nonatomic) char showClosedCaptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
