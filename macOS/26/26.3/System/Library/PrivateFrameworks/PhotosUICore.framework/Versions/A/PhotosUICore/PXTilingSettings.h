@interface PXTilingSettings : PXSettings

@property (nonatomic) BOOL flipLayoutsHorizontally;

+ (id)sharedInstance;

- (id)parentSettings;
- (void)setDefaultValues;

@end
