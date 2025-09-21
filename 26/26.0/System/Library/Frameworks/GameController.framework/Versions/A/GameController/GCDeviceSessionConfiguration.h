@class NSString, NSArray;

@interface GCDeviceSessionConfiguration : NSObject <NSSecureCoding, NSCopying> {
    NSString *_clientIdentifier;
    BOOL _nonUI;
    BOOL _monitorControllerEventsInBackground;
    BOOL _bypassUIKit;
    BOOL _ignoresUIAlertAssertions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *clientIdentifier;
@property (copy, nonatomic) NSArray *supportedGameControllers;
@property (nonatomic, getter=isNonUI) BOOL nonUI;
@property (nonatomic) BOOL spatialGamepadSupported;
@property (nonatomic) BOOL spatialGamepadProductCategoryIncludesChirality;
@property (nonatomic) BOOL coalesceRemotes;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)setBypassUIKit:(BOOL)a0;
- (BOOL)bypassUIKit;
- (BOOL)ignoresUIAlertAssertions;
- (id)initWithClientIdentifier:(id)a0 reserved:(unsigned long long)a1;
- (void)setIgnoresUIAlertAssertions:(BOOL)a0;

@end
