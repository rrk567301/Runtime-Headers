@class NSUUID, NSString;

@interface AACustodianUpdateRequestContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *custodianID;
@property (copy, nonatomic) NSString *telemetryFlowID;
@property (copy, nonatomic) NSString *altDSID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCustodianID:(id)a0;

@end
