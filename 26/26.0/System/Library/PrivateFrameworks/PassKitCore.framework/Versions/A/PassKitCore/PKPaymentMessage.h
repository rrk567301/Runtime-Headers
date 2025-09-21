@class NSString, NSURL, NSDate;

@interface PKPaymentMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSURL *actionURL;
@property (copy, nonatomic) NSDate *messageDate;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) unsigned long long messageType;
@property (nonatomic) BOOL allowDeepLinkToApp;
@property (nonatomic) BOOL hasAssociatedPaymentApplication;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (nonatomic, getter=isArchived) BOOL archived;

+ (BOOL)canArchiveWithTransaction:(id)a0;
+ (id)paymentMessageWithDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToPaymentMessage:(id)a0;
- (BOOL)shouldMessageArchiveWithTransaction:(id)a0;

@end
