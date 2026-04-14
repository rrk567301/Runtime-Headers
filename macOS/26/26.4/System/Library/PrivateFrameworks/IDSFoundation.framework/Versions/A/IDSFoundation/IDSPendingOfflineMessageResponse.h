@class NSString, NSData;

@interface IDSPendingOfflineMessageResponse : IDSMessage <NSCopying>

@property (copy) NSString *messageIdentifier;
@property (copy) NSData *ssm;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)command;
- (id)messageBody;
- (void).cxx_destruct;
- (id)description;

@end
