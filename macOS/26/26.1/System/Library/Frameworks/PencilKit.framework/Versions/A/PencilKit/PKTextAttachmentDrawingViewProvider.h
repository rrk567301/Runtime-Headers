@protocol NSTextLocation;

@interface PKTextAttachmentDrawingViewProvider : NSTextAttachmentViewProvider

@property (retain, nonatomic) id<NSTextLocation> updatedLocationForRecycledViewProvider;

+ (Class)drawingClassForFileType:(id)a0;
+ (Class)drawingViewClassForDrawingClass:(Class)a0;
+ (void)registerViewProviderClassIfNecessary;

- (void)setLocation:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)location;

@end
