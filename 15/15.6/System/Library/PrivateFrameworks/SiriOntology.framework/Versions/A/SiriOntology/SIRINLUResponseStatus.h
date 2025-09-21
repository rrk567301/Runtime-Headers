@class NSString;

@interface SIRINLUResponseStatus : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSString *statusDescription;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initStatusCode:(int)a0 statusDescription:(id)a1;

@end
