@interface BYCheckSFRVersionOperation : BYOperation

- (id)description;
- (void)main;
- (char)required;
- (id)_currentRestoreVersion;
- (id)_targetRestoreVersion;

@end
