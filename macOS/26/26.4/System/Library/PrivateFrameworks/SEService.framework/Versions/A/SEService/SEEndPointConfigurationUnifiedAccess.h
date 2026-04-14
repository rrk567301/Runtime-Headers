@class NSString;

@interface SEEndPointConfigurationUnifiedAccess : SEEndPointConfiguration

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL standardFlowAllowedOnContactless;
@property (nonatomic) BOOL fastFlowAllowedOnContactless;
@property (nonatomic) BOOL standardFlowAllowedOnWire;
@property (nonatomic) BOOL fastFlowAllowedOnWire;
@property (nonatomic) BOOL authorizeEndPointAllowed;
@property (nonatomic) BOOL authorizeEndPointWithAuthorizeAllowed;
@property (nonatomic) BOOL exchangeAllowedOnWire;
@property (nonatomic) BOOL exchangeAllowedInFastFlow;
@property (nonatomic) BOOL signAllowed;
@property (nonatomic) BOOL exportEraseConfidentialMailBox;
@property (nonatomic) BOOL confidentialDataAllowed;
@property (nonatomic) BOOL terminationNotPersisted;
@property (nonatomic, readonly) NSString *description;

- (id)initWithConfiguration:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithOpt1:(unsigned char)a0 opt2:(unsigned char)a1;
- (id)initWithOpt1:(unsigned char)a0 opt2:(unsigned char)a1 optA:(unsigned char)a2;

@end
