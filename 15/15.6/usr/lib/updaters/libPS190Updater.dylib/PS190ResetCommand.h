@interface PS190ResetCommand : PS190Command

- (id)description;
- (char)causesReset;
- (id)initWithSubcommand:(unsigned char)a0;

@end
