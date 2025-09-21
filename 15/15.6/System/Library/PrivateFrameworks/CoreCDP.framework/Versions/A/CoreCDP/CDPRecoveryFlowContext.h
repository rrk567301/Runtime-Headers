@class CDPContext;

@interface CDPRecoveryFlowContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) CDPContext *context;
@property (nonatomic) char hasPeersForRemoteApproval;
@property (nonatomic) char isWalrusEnabled;
@property (nonatomic) double rpdProbationDuration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
