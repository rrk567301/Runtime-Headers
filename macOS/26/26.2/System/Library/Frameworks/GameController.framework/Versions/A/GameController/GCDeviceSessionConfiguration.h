@class NSString, NSArray;

@interface GCDeviceSessionConfiguration : NSObject <NSSecureCoding, NSCopying> {
    NSString *_clientIdentifier;
    BOOL _nonUI;
    BOOL _bypassUIKit;
    BOOL _ignoresUIAlertAssertions;
    BOOL _disableShareGestures;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *clientIdentifier;
@property (copy, nonatomic) NSArray *supportedGameControllers;
@property (nonatomic, getter=isNonUI) BOOL nonUI;
@property (nonatomic) BOOL spatialGamepadSupported;
@property (nonatomic) BOOL spatialGamepadProductCategoryIncludesChirality;
@property (nonatomic) BOOL enableInputEventBufferingPreview;
@property (nonatomic) BOOL monitorControllerEventsInBackground;
@property (nonatomic) BOOL coalesceRemotes;

+ (void)initialize;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void)setBypassUIKit:(BOOL)a0;
- (BOOL)bypassUIKit;
- (BOOL)disableShareGestures;
- (BOOL)ignoresUIAlertAssertions;
- (id)initWithClientIdentifier:(id)a0 reserved:(unsigned long long)a1;
- (void)setDisableShareGestures:(BOOL)a0;
- (void)setIgnoresUIAlertAssertions:(BOOL)a0;

@end
