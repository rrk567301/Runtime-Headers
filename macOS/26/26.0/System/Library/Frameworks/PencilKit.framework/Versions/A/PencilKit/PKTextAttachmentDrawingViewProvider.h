@protocol NSTextLocation;

@interface PKTextAttachmentDrawingViewProvider : NSTextAttachmentViewProvider

@property (retain, nonatomic) id<NSTextLocation> updatedLocationForRecycledViewProvider;

+ (Class)drawingClassForFileType:(id)a0;
+ (Class)drawingViewClassForDrawingClass:(Class)a0;
+ (void)registerViewProviderClassIfNecessary;

- (void)loadView;
- (void)setLocation:(id)a0;
- (id)location;
- (void).cxx_destruct;

@end
