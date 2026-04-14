@class NSString, NSData;

@interface IDSPendingOfflineMessageResponse : IDSMessage <NSCopying>

@property (copy) NSString *messageIdentifier;
@property (copy) NSData *ssm;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)messageBody;
- (long long)command;

@end
