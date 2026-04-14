@class NSString;

@interface AKColorString : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *string;

- (void)encodeWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
