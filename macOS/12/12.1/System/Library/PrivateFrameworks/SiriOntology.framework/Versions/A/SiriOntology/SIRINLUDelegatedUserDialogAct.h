@class NSString;

@interface SIRINLUDelegatedUserDialogAct : NSObject <SIRINLUUserDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property int asrHypothesisIndex;
@property (retain, nonatomic) NSString *rewrittenUtterance;
@property (retain, nonatomic) NSString *externalParserId;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAsrHypothesisIndex:(int)a0 rewrittenUtterace:(id)a1 externalParserId:(id)a2;

@end
