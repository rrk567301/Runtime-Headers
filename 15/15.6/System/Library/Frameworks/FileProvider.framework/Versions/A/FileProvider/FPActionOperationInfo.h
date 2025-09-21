@class NSString, NSArray;

@interface FPActionOperationInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *operationID;
@property (retain, nonatomic) NSArray *roots;
@property (nonatomic) char attachSandboxExtensionsOnXPCEncoding;
@property (nonatomic) unsigned int qos;
@property (nonatomic) unsigned long long _t_moveQueueWidth;
@property (nonatomic) char _t_clientDrivenReader;
@property (nonatomic) char _t_clearItemURLs;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOperationID:(id)a0 roots:(id)a1;

@end
