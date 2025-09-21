@class NSArray, NSDate;

@interface SPCBPeripheralKeyRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSArray *requestParameters;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0 requestParameters:(id)a1;
- (void).cxx_destruct;

@end
