@class NSString, NSError;

@interface AAAttributionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) long long source;
@property (nonatomic) double daemonRunningTime;
@property (retain, nonatomic) NSString *storeFront;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0;
- (id)initWithToken:(id)a0 source:(long long)a1;
- (id)initWithToken:(id)a0 success:(BOOL)a1 error:(id)a2 source:(long long)a3;

@end
