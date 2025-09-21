@class NSArray, NSString, IMServiceReachabilityContext;

@interface IMServiceReachabilityRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *handleIDs;
@property (readonly, nonatomic) NSString *requestID;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) IMServiceReachabilityContext *context;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_signature;
- (id)initWithHandleIDs:(id)a0 requestID:(id)a1 serviceName:(id)a2 accountID:(id)a3 context:(id)a4;

@end
