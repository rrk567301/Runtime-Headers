@class NSString;

@interface IDSCancelMessage : IDSMessage

@property (retain, nonatomic) NSString *fromID;
@property (retain, nonatomic) NSString *queueOneIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)messageBody;
- (long long)command;
- (id)initWithQueueOneIdentifier:(id)a0 fromID:(id)a1;

@end
