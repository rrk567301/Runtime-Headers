@interface PS190GetInfoCommand : PS190Command

- (unsigned int)responseSize;
- (id)description;
- (id)initWithSubcommand:(unsigned char)a0;

@end
