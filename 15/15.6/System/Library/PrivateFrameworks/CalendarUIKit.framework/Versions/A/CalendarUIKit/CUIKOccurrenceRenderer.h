@interface CUIKOccurrenceRenderer : NSObject

+ (id)reminderBackgroundColor:(char)a0 style:(long long)a1 miniPreview:(char)a2 completed:(char)a3;
+ (void)renderReminderInPreparedContext:(struct CGContext { } *)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 selected:(char)a2 stackDepth:(int)a3 userInterfaceStyle:(long long)a4 miniPreview:(char)a5 allDay:(char)a6 completed:(char)a7;
+ (void)drawReminderInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fillColor:(id)a2 strokeColor:(id)a3 coveringReminderRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 allDay:(char)a5;
+ (id)reminderStrokeColor:(char)a0 stack:(char)a1 style:(long long)a2;
+ (id)renderColorBlockImageWithThickness:(double)a0 backgroundColor:(struct CGColor { } *)a1 stripeColor:(struct CGColor { } *)a2 stripedImageAlpha:(double)a3;
+ (id)renderReminderBackgroundSelected:(char)a0 stackDepth:(int)a1 userInterfaceStyle:(long long)a2 miniPreview:(char)a3 completed:(char)a4;
+ (id)renderStrings:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 font:(id)a2 edgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a3 leadingIcon:(id)a4 trailingIcons:(id)a5 shouldAutoHideLeadingIcon:(char)a6;
+ (id /* block */)renderingBlockForStrings:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 font:(id)a2 edgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a3 leadingIcon:(id)a4 trailingIcons:(id)a5 outImageSize:(struct CGSize { double x0; double x1; } *)a6 shouldAutoHideLeadingIcon:(char)a7;

@end
