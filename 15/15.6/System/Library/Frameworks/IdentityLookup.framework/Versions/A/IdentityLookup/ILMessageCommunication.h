@class NSString;

@interface ILMessageCommunication : ILCommunication

@property (readonly, copy, nonatomic) NSString *messageBody;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSender:(id)a0 dateReceived:(id)a1 messageBody:(id)a2;
- (char)isEqualToMessageCommunication:(id)a0;

@end
