@interface DAMailboxDeleteMessageRequest : DAMailboxRequest

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initRequestWithMessageID:(id)a0;

@end
