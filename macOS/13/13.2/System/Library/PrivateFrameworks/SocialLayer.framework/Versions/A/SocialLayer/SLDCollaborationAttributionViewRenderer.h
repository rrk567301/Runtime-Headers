@class UISSlotStyle, SLCollaborationAttributionViewMetricsProvider, SLDCollaborationAttributionViewSlotTag;

@interface SLDCollaborationAttributionViewRenderer : NSObject

@property (retain, nonatomic) UISSlotStyle *slotStyle;
@property (retain, nonatomic) SLDCollaborationAttributionViewSlotTag *slotTag;
@property (nonatomic, getter=isRTL) BOOL RTL;
@property (retain, nonatomic) SLCollaborationAttributionViewMetricsProvider *metricsProvider;

- (void).cxx_destruct;
- (void)renderInContext:(struct CGContext { } *)a0;
- (id)initWithStyle:(id)a0 tag:(id)a1;
- (struct CGImage { } *)newGroupPhotoImageFromFileURL:(id)a0;
- (struct CGImage { } *)newSnowglobeImageWithCGImages:(id)a0;
- (struct CGImage { } *)newImageFromData:(id)a0;
- (struct CGImage { } *)newMonogramImageForContact:(id)a0;
- (struct CGImage { } *)newAvatarImageForConversationDrawingMetadata:(id)a0 allowSnowglobe:(BOOL)a1 allowMonogram:(BOOL)a2;
- (struct CGImage { } *)newAvatarImageForRecipientDrawingMetadata:(id)a0 allowMonogram:(BOOL)a1;
- (struct CGImage { } *)newAvatarImage;
- (BOOL)shouldShowMonogramIfApplicableForVariant:(long long)a0;
- (BOOL)shouldShowSnowglobeIfApplicableForVariant:(long long)a0;
- (BOOL)shouldShowGenericIconIfApplicableForVariant:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawGenericGlyphInContext:(struct CGContext { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawAvatarWithImageRef:(struct CGImage { } *)a0 inContext:(struct CGContext { } *)a1;
- (BOOL)shouldShowSubtitle;
- (BOOL)shouldShowLabels;
- (double)heightForLine:(struct __CTLine { } *)a0 withOptions:(unsigned long long)a1;
- (id)collaboratorsString;
- (id)withCollaboratorsString;
- (id)collaboratorsStringPrefixingWith:(BOOL)a0;
- (void)drawLine:(struct __CTLine { } *)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2;

@end
