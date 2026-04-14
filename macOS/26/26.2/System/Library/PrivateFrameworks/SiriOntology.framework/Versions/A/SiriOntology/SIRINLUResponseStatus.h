@class NSString;

@interface SIRINLUResponseStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSString *statusDescription;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initStatusCode:(int)a0 statusDescription:(id)a1;

@end
