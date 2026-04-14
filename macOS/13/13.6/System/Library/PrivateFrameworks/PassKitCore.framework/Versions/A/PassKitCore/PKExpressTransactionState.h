@class NSString;

@interface PKExpressTransactionState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long technologyType;
@property (copy, nonatomic) NSString *paymentApplicationIdentifier;
@property (retain, nonatomic) NSString *passUniqueIdentifier;
@property (nonatomic, getter=isProcessing) BOOL processing;
@property (nonatomic) unsigned long long receivedEvents;
@property (nonatomic) long long standaloneTransactionType;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
