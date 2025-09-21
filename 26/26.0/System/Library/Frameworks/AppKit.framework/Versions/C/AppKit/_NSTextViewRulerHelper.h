@class NSTextViewSharedData, NSView, NSTabWell, NSPopUpButton, NSSegmentedControl;

@interface _NSTextViewRulerHelper : NSObject {
    NSTextViewSharedData *_textViewSharedData;
    BOOL temporarySpacingChange;
}

@property (retain) NSView *rulerAccessoryView;
@property (retain) NSPopUpButton *stylesPopUp;
@property (retain) NSSegmentedControl *alignmentsControl;
@property (retain) NSPopUpButton *spacingsPopUp;
@property (retain) NSPopUpButton *listsPopUp;
@property (retain) NSView *tabWellContainer;
@property (retain) NSTabWell *leftTabWell;
@property (retain) NSTabWell *rightTabWell;
@property (retain) NSTabWell *centerTabWell;
@property (retain) NSTabWell *decimalTabWell;

- (void)dealloc;
- (void)_doUserParagraphStyleLineHeightMultiple:(double)a0 min:(double)a1 max:(double)a2 lineSpacing:(double)a3 paragraphSpacingBefore:(double)a4 after:(double)a5 isFinal:(BOOL)a6;
- (void)_doUserRemoveMarkerFormatInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_doUserSetAttributes:(id)a0 removeAttributes:(id)a1;
- (void)_doUserSetListMarkerFormat:(id)a0 options:(unsigned long long)a1;
- (void)_doUserSetListMarkerFormat:(id)a0 options:(unsigned long long)a1 startingItemNumber:(long long)a2 forceStartingItemNumber:(BOOL)a3;
- (void)_doUserSetListMarkerFormat:(id)a0 options:(unsigned long long)a1 startingItemNumber:(long long)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 level:(unsigned long long)a4;
- (unsigned long long)_markerLevelForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_rulerAccViewAlignmentAction:(id)a0;
- (void)_rulerAccViewListsAction:(id)a0;
- (void)_rulerAccViewSetUpLists;
- (void)_rulerAccViewSpacingAction:(id)a0;
- (void)_rulerAccViewStylesAction:(id)a0;
- (void)_rulerAccViewUpdateStyles:(id)a0;
- (double)defaultLineHeightForFont:(id)a0;
- (id)initWithTextViewSharedData:(id)a0;
- (id)rulerAccessoryViewForTextView:(id)a0 paragraphStyle:(id)a1 ruler:(id)a2 enabled:(BOOL)a3;
- (id)rulerMarkersForTextView:(id)a0 paragraphStyle:(id)a1 ruler:(id)a2;

@end
