@class NSString;

@interface DRSSubmitLogRequest : DRSRequest

@property (readonly, nonatomic) NSString *sandboxExtension;
@property (readonly, nonatomic) BOOL transferOwnership;

+ (id)entityName;
+ (Class)_moClass;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)requestType;
- (id)initWithXPCDict:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (void)_configureRequestMO:(id)a0;
- (unsigned long long)expectedType;
- (id)_initWithSubmitLogRequestMO_ON_MOC_QUEUE:(id)a0;
- (BOOL)performOnReceiptWork:(id)a0 dampeningOutcome:(unsigned long long)a1;

@end
