@interface PXTilingSettings : PXSettings

@property (nonatomic) char flipLayoutsHorizontally;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;

@end
