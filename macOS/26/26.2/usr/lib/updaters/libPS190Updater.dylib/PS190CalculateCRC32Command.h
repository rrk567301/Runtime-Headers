@interface PS190CalculateCRC32Command : PS190Command

- (unsigned int)responseSize;
- (id)description;
- (id)initWithBlockStartNumber:(unsigned char)a0 blockEndNumber:(unsigned char)a1;

@end
