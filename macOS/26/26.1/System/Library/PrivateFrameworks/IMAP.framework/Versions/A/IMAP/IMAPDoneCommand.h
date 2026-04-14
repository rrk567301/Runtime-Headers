@interface IMAPDoneCommand : IMAPSingleCommand

- (id)activityString;
- (void)setSequenceNumber:(unsigned long long)a0;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;

@end
