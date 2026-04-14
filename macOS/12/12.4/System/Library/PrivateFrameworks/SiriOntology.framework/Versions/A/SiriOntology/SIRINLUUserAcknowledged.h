@class NSUUID, USOSerializedGraph;

@interface SIRINLUUserAcknowledged : NSObject <SIRINLUUserDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *systemDialogActId;
@property (retain, nonatomic) USOSerializedGraph *reference;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSystemDialogActId:(id)a0 reference:(id)a1;

@end
