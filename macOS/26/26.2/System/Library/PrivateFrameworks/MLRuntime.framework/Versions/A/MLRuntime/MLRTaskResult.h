@class NSDictionary, NSData;

@interface MLRTaskResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *JSONResult;
@property (readonly, nonatomic) NSData *vector;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithJSONResult:(id)a0 unprivatizedVector:(id)a1;

@end
