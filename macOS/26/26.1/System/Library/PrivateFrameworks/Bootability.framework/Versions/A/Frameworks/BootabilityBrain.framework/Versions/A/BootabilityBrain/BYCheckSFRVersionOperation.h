@interface BYCheckSFRVersionOperation : BYOperation

- (void)main;
- (id)description;
- (BOOL)required;
- (id)_currentRestoreVersion;
- (id)_targetRestoreVersion;

@end
