@class NSString, NSData;

@interface IDSPendingOfflineMessageResponse : IDSMessage <NSCopying>

@property (copy) NSString *messageIdentifier;
@property (copy) NSData *ssm;

- (id)messageBody;
- (long long)command;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;

@end
