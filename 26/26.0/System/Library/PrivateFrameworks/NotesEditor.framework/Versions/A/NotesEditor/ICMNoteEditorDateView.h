@class ICNoteDateFormatterController, NSString, NSTextField, ICMZoomController, ICNote;

@interface ICMNoteEditorDateView : NSView <ICNoteDateFormatterControllerDelegate, ICMZoomableAttachmentView>

@property (class, readonly, nonatomic) double dateViewLabelAlpha;

@property (weak, nonatomic) NSTextField *dateLabel;
@property (copy, nonatomic) NSString *dateString;
@property (nonatomic) BOOL iconIsHidden;
@property (retain, nonatomic) ICNoteDateFormatterController *formatterController;
@property (retain, nonatomic) ICMZoomController *zoomController;
@property (retain, nonatomic) ICNote *note;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newDateView;

- (void)mouseDown:(id)a0;
- (void)reset;
- (id)accessibilityValue;
- (void)update;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityParent;
- (BOOL)accessibilityPerformPress;
- (void)awakeFromNib;
- (void)hostViewDidZoom:(id)a0;
- (id)attributedStringForLabel;
- (void)formatter:(id)a0 iconHiddenDidChange:(BOOL)a1;
- (void)formatter:(id)a0 textDidChange:(id)a1 fullText:(id)a2;

@end
