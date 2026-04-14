@class NSString;

@interface MADVideoSessionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *requestID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithRequestID:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
