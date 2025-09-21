@interface OverlayTrackedDisplay : NSObject

@property (readonly, nonatomic) unsigned int identifier;
@property (readonly, nonatomic, getter=isBuiltIn) BOOL builtIn;
@property (readonly, nonatomic) BOOL canChangeBrightness;
@property (readonly, nonatomic, getter=isSmartDisplay) BOOL smartDisplay;
@property (nonatomic) float brightness;

- (id)initWithIdentifier:(unsigned int)a0;

@end
