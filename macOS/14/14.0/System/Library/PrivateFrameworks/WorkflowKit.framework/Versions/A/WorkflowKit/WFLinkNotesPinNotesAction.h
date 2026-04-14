@interface WFLinkNotesPinNotesAction : WFLinkFavoriteEntityAction

- (id)overrideDescriptionSummary;
- (id)overrideParameterSummary;
- (id)overrideLabelsByParameter;
- (id)overrideName;
- (BOOL)shouldOverrideParameterLabels;

@end
