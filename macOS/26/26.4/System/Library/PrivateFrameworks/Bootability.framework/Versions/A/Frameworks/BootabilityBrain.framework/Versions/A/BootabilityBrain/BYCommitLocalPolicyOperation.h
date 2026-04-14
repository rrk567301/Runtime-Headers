@interface BYCommitLocalPolicyOperation : BYOperation

- (void)main;
- (BOOL)required;
- (id)description;
- (void)_updateActiveFile;
- (void)_writeNSIHString:(id)a0 toActiveFile:(id)a1;

@end
