@interface CUIKOccurrenceRenderer : NSObject

+ (id)reminderBackgroundColor:(BOOL)a0 style:(long long)a1 miniPreview:(BOOL)a2 completed:(BOOL)a3;
+ (void)renderReminderInPreparedContext:(struct CGContext { } *)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 selected:(BOOL)a2 stackDepth:(int)a3 userInterfaceStyle:(long long)a4 miniPreview:(BOOL)a5 allDay:(BOOL)a6 completed:(BOOL)a7;
+ (void)drawReminderInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fillColor:(id)a2 strokeColor:(id)a3 coveringReminderRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 allDay:(BOOL)a5;
+ (id)reminderBackgroundColor:(BOOL)a0 style:(long long)a1 miniPreview:(BOOL)a2 completed:(BOOL)a3 darkenForAllDayArea:(BOOL)a4;
+ (id)reminderStrokeColor:(BOOL)a0 stack:(BOOL)a1 style:(long long)a2;
+ (id)renderColorBlockImageWithSize:(struct CGSize { double x0; double x1; })a0 colorBarColor:(struct CGColor { } *)a1 backgroundColor:(struct CGColor { } *)a2 stripeColor:(struct CGColor { } *)a3 stripedImageAlpha:(double)a4;
+ (id)renderReminderBackgroundSelected:(BOOL)a0 stackDepth:(int)a1 userInterfaceStyle:(long long)a2 miniPreview:(BOOL)a3 completed:(BOOL)a4;
+ (id)renderStrings:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 font:(id)a2 edgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a3 leadingIcon:(id)a4 trailingIcons:(id)a5 shouldAutoHideLeadingIcon:(BOOL)a6;
+ (id /* block */)renderingBlockForStrings:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 font:(id)a2 edgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a3 leadingIcon:(id)a4 trailingIcons:(id)a5 outImageSize:(struct CGSize { double x0; double x1; } *)a6 shouldAutoHideLeadingIcon:(BOOL)a7;

@end
