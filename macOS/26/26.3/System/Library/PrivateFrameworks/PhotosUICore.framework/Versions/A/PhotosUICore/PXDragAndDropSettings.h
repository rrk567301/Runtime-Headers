@interface PXDragAndDropSettings : PXSettings

@property (nonatomic) BOOL useData;
@property (nonatomic) BOOL useFileProvider;

+ (id)sharedInstance;

- (id)parentSettings;
- (void)setDefaultValues;

@end
