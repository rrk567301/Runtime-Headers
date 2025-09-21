@class NSObject;

@interface RESharedResourcePayload : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (weak, nonatomic) NSObject *clientObject;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
