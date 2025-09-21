@class NSString, NSDate;

@interface PKPaymentMessage : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSDate *messageDate;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) unsigned long long messageType;
@property (nonatomic) char allowDeepLink;
@property (nonatomic) char hasAssociatedPaymentApplication;
@property (readonly, nonatomic) char archiveOnNextTransaction;
@property (readonly, nonatomic, getter=isValid) char valid;
@property (nonatomic, getter=isArchived) char archived;

+ (id)paymentMessageWithDictionary:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToPaymentMessage:(id)a0;

@end
