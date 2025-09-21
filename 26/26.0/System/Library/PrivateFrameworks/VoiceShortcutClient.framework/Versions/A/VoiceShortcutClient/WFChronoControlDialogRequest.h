@class CHSControlIdentity;

@interface WFChronoControlDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long controlType;
@property (readonly, nonatomic) CHSControlIdentity *controlIdentity;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithControlType:(unsigned long long)a0 identity:(id)a1 attribution:(id)a2;

@end
