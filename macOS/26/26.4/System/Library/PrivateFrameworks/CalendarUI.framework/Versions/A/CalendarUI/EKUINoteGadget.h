@class NSString, EKEvent;

@interface EKUINoteGadget : EKUISingleTextFieldGadget <CalUIResizingTextFieldDelegate> {
    BOOL _showingAllNotes;
    BOOL _expanded;
    EKEvent *_lastDisplayedEvent;
    NSString *_currentlyDisplayedCompleteNotes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)expandURL;
+ (id)interestedChangeKeys;

- (double)maxHeight;
- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasData;
- (void)setObject:(id)a0;
- (id)accessibilityIdentifier;
- (BOOL)clickedOnLink:(id)a0 atIndex:(unsigned long long)a1;
- (id)iconSymbolName;
- (id)placeholderText;
- (id)recurrenceDifferenceDescription;
- (BOOL)shouldTrimNotes;
- (id)claimedPboardTypes;
- (unsigned long long)recurrenceDifferenceCount;
- (id)recurrenceDifferenceTitle;
- (void)resetToOriginalItem;
- (void)updateEvent;
- (void)updateTrimmedNotes;
- (void)updateWithChanges:(id)a0;

@end
