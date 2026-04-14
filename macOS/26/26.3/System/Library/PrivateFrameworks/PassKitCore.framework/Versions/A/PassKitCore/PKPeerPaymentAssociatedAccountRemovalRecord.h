@class NSString, NSDate;

@interface PKPeerPaymentAssociatedAccountRemovalRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) long long reason;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) BOOL hasPresentedNotification;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
