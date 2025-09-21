@interface BYCheckSFRVersionOperation : BYOperation

- (void)main;
- (BOOL)required;
- (id)description;
- (id)_currentRestoreVersion;
- (id)_targetRestoreVersion;

@end
