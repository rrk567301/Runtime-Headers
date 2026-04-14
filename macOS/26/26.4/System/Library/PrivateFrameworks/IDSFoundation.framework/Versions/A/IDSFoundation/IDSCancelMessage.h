@class NSString;

@interface IDSCancelMessage : IDSMessage

@property (retain, nonatomic) NSString *fromID;
@property (retain, nonatomic) NSString *queueOneIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)command;
- (id)messageBody;
- (void).cxx_destruct;
- (id)description;
- (id)initWithQueueOneIdentifier:(id)a0 fromID:(id)a1;

@end
