@class NSData, NSNumber;

@interface APSSignDataWithIdentityRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSNumber *time;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
