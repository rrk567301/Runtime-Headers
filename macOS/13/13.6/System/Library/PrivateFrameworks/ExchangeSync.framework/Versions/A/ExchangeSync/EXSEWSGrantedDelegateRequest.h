@class NSString, NSXPCConnection, ESEGrantedDelegate;

@interface EXSEWSGrantedDelegateRequest : NSObject

@property (readonly, nonatomic) NSString *requestID;
@property (readonly, nonatomic) long long operationType;
@property (readonly, nonatomic) ESEGrantedDelegate *delegate;
@property (readonly, weak, nonatomic) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)initWithRequestID:(id)a0 connection:(id)a1;
- (id)initWithRequestID:(id)a0 operationType:(long long)a1 eseDelegate:(id)a2 connection:(id)a3;

@end
