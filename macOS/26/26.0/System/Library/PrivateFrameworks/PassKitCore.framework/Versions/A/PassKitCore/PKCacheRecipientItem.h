@class NSDate, PKPeerPaymentRecipient;

@interface PKCacheRecipientItem : NSObject <NSSecureCoding> {
    NSDate *_insertDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPeerPaymentRecipient *item;

- (BOOL)hasExpired;
- (id)initWithItem:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isNewerThan:(id)a0;

@end
