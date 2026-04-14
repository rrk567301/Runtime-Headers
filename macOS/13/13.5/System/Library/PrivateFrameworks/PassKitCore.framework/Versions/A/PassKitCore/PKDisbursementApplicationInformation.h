@class NSString, NSData;

@interface PKDisbursementApplicationInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *vendorName;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSData *iconData;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVendorName:(id)a0 itemName:(id)a1 iconData:(id)a2;

@end
