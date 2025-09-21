@class NSUUID, NSString;

@interface AACustodianInvitationResponseContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSUUID *custodianID;
@property (nonatomic, getter=isAccepted) char accepted;
@property (nonatomic, getter=isAutoAction) char autoAction;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *telemetryFlowID;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCustodianID:(id)a0 didAccept:(char)a1;

@end
