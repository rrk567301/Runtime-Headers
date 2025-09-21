@class ICRemoteRequestOperation;

@interface ICRemoteRequestOperationExecutionContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) ICRemoteRequestOperation *remoteRequestOperation;
@property (nonatomic) long long qualityOfService;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRemoteRequestOperation:(id)a0;

@end
