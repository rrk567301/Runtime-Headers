@interface EKUIConferenceNoteGadget : EKUINoteGadget

- (BOOL)hasData;
- (id)placeholderText;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;
- (void)updateEvent;

@end
