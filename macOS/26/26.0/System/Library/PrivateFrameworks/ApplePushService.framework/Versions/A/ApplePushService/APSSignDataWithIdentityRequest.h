@class NSData, NSNumber;

@interface APSSignDataWithIdentityRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSNumber *time;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
