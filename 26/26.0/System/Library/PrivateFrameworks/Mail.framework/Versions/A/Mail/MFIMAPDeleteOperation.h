@interface MFIMAPDeleteOperation : MFIMAPOperation

- (unsigned char)operationType;
- (id)description;
- (id)initWithMailboxToDelete:(id)a0;

@end
