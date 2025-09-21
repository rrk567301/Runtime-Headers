@interface MSDeleteTriageAction : MSTriageAction

- (char)isUndoSupported;
- (id)_changeAction;

@end
