@class KHProjectJournalEntry;
@protocol KHCellFrameJournalDataProvider;

@interface KHCellFrame : KHChildFrame {
    id<KHCellFrameJournalDataProvider> _cell;
    KHProjectJournalEntry *_journalEntry;
}

- (void)dealloc;
- (double)rotation;
- (id)attributes;
- (id)cell;
- (void)setCell:(id)a0;
- (id)attributeForKey:(id)a0;
- (id)photo;
- (id)photoId;
- (void)removeAttributeForKey:(id)a0;
- (id)treatment;
- (void)persist;
- (void)setTreatment:(id)a0;
- (id)journalEntry;
- (void)setRawText:(id)a0 momentary:(BOOL)a1;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (id)rawText;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })baseRectForScale:(double)a0;
- (BOOL)isCellFrame;
- (BOOL)hasBoilerplateText;
- (id)stripCaptionFormatFromString:(id)a0;
- (id)textFormatter;
- (long long)captionArrowPosition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionRectForScale:(double)a0;
- (void)setHasBoilerplateText:(BOOL)a0 momentary:(BOOL)a1;
- (void)loadAttributes;
- (id)addAttributeValue:(id)a0 forKey:(id)a1 type:(id)a2 momentary:(BOOL)a3;
- (id)setValue:(id)a0 forKey:(id)a1 type:(id)a2 momentary:(BOOL)a3;
- (void)moveCaptionToNextAvailableCell;
- (void)setJournalEntry:(id)a0;
- (id)photoCaptionText;
- (void)setPhoto:(id)a0 shouldAutoZoomAndCrop:(BOOL)a1 momentary:(BOOL)a2 sendPlacementNotification:(BOOL)a3 storePreviousPhotoInfo:(BOOL)a4;
- (void)swapWithFrame:(id)a0;
- (id)snapshotPhotoFrameWithSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)wantsFrameHUD;
- (BOOL)wantsTransparencyLayer;
- (BOOL)wantsCalendarHUD;
- (BOOL)isValidDestinationForType:(id)a0;

@end
