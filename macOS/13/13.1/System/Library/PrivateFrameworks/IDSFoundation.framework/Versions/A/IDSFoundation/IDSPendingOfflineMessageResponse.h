@interface IDSPendingOfflineMessageResponse : IDSMessage <NSCopying>

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)command;
- (id)messageBody;

@end
