@class NSString;

@interface AKColorString : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *string;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
