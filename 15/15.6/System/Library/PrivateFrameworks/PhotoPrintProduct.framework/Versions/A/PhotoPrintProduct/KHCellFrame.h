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
- (id)rawText;
- (id)setValue:(id)a0 forKey:(id)a1 type:(id)a2 momentary:(char)a3;
- (id)addAttributeValue:(id)a0 forKey:(id)a1 type:(id)a2 momentary:(char)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })baseRectForScale:(double)a0;
- (long long)captionArrowPosition;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (char)hasBoilerplateText;
- (char)isCellFrame;
- (char)isValidDestinationForType:(id)a0;
- (void)loadAttributes;
- (void)moveCaptionToNextAvailableCell;
- (id)photoCaptionText;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionRectForScale:(double)a0;
- (void)setHasBoilerplateText:(char)a0 momentary:(char)a1;
- (void)setJournalEntry:(id)a0;
- (void)setPhoto:(id)a0 shouldAutoZoomAndCrop:(char)a1 momentary:(char)a2 sendPlacementNotification:(char)a3 storePreviousPhotoInfo:(char)a4;
- (void)setRawText:(id)a0 momentary:(char)a1;
- (id)snapshotPhotoFrameWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)stripCaptionFormatFromString:(id)a0;
- (void)swapWithFrame:(id)a0;
- (id)textFormatter;
- (char)wantsCalendarHUD;
- (char)wantsFrameHUD;
- (char)wantsTransparencyLayer;

@end
