@class NSDate, PKPeerPaymentRecipient;

@interface PKCacheRecipientItem : NSObject <NSSecureCoding> {
    NSDate *_insertDate;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PKPeerPaymentRecipient *item;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItem:(id)a0;
- (char)hasExpired;
- (char)isNewerThan:(id)a0;

@end
