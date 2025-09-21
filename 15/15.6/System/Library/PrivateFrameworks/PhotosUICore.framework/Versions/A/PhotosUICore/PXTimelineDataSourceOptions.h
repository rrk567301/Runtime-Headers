@interface PXTimelineDataSourceOptions : NSObject

@property (nonatomic) struct CGSize { double width; double height; } widgetSize;
@property (nonatomic) char includeSuggestions;
@property (nonatomic) char includeAssets;

- (id)initForWidgetWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithMemoriesOnly;

@end
