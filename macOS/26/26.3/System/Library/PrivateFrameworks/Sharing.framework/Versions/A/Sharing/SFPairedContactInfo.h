@class NSString, NSData, NSDate;

@interface SFPairedContactInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *givenName;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) NSDate *expiryDate;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 imageData:(id)a1 deviceName:(id)a2 givenName:(id)a3 familyName:(id)a4 expiryDate:(id)a5;

@end
