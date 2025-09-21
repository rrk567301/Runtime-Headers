@class EKEvent, CalUILayerBackedView;

@interface CalUIListViewCell : NSView {
    CalUILayerBackedView *_divider;
}

@property (readonly, nonatomic) EKEvent *event;
@property (readonly, nonatomic) char dragPreview;
@property (nonatomic) char selected;
@property (nonatomic) char dimmed;
@property (nonatomic) char drawDivider;

+ (char)drawsBackgroundForEvent:(id)a0;

- (void).cxx_destruct;
- (id)initForDragPreview:(char)a0;

@end
