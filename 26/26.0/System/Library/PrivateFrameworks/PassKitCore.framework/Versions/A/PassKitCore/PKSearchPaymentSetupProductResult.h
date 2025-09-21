@class NSString, NSURL, NSData;

@interface PKSearchPaymentSetupProductResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *productIdentifier;
@property (retain, nonatomic) NSURL *thumbnailURL;
@property (copy, nonatomic) NSData *thumbnailData;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *contentDescription;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
