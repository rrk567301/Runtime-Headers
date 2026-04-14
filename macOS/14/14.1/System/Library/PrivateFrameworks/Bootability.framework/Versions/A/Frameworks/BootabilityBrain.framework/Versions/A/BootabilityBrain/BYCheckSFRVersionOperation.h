@interface BYCheckSFRVersionOperation : BYOperation

- (id)description;
- (void)main;
- (BOOL)required;
- (id)_targetRestoreVersion;
- (id)_currentRestoreVersion;

@end
