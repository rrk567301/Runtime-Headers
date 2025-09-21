@class NSError, NSDictionary;

@interface FACircleStateResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char success;
@property (readonly, nonatomic) char loadSuccess;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSDictionary *userInfo;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLoadSuccess:(char)a0 error:(id)a1 userInfo:(id)a2;

@end
