@interface DAMailboxDeleteMessageRequest : DAMailboxRequest

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initRequestWithMessageID:(id)a0;

@end
