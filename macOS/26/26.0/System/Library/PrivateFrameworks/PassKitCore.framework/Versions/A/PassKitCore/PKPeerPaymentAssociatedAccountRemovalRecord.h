@class NSString, NSDate;

@interface PKPeerPaymentAssociatedAccountRemovalRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) long long reason;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) BOOL hasPresentedNotification;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
