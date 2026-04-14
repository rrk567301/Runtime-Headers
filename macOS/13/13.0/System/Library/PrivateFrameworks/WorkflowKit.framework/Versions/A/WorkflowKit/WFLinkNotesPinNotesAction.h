@interface WFLinkNotesPinNotesAction : WFLinkFavoriteEntityAction

- (id)overrideParameterSummary;
- (id)overrideDescriptionSummary;
- (BOOL)shouldOverrideParameterLabels;
- (id)overrideName;
- (id)overrideLabelsByParameter;

@end
