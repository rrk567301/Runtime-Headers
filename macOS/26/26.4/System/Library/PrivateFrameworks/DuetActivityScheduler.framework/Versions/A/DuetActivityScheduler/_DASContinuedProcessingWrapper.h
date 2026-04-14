@class NSString;

@interface _DASContinuedProcessingWrapper : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *iconUTI;
@property (copy, nonatomic) NSString *linkToBundleIdentifier;
@property (nonatomic) long long resources;
@property (nonatomic) long long submissionStrategy;
@property (nonatomic) long long executionContext;
@property (nonatomic) struct { unsigned int val[8]; } hostAppAuditToken;
@property (readonly, nonatomic) BOOL isForegroundAppProxy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 iconUTI:(id)a2 linkToBundleIdentifier:(id)a3 resources:(long long)a4;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 iconUTI:(id)a2 linkToBundleIdentifier:(id)a3 resources:(long long)a4 submissionStrategy:(long long)a5 executionContext:(long long)a6 hostAppAuditToken:(struct { unsigned int x0[8]; })a7;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 resources:(long long)a2 submissionStrategy:(long long)a3 executionContext:(long long)a4 hostAppAuditToken:(struct { unsigned int x0[8]; })a5;
- (void)rectifyExecutionContextWithClientProcessHandle:(id)a0 hostAppProcHandle:(id)a1;

@end
