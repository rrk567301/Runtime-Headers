@interface PXDragAndDropSettings : PXSettings

@property (nonatomic) char useData;
@property (nonatomic) char useFileProvider;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;

@end
