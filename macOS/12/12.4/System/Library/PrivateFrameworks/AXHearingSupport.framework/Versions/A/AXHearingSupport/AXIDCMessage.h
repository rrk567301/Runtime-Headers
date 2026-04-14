@class NSString;

@interface AXIDCMessage : AXSimpleMessage

@property (retain, nonatomic) NSString *UUID;
@property (copy, nonatomic) id /* block */ sendCompletion;

+ (id)messageWithPayload:(id)a0 andSendCompletion:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithPayload:(id)a0;
- (id)transportPayload;

@end
