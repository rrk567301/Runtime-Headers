@class NSUUID, USOSerializedGraph;

@interface SIRINLUUserWantedToRepeat : NSObject <SIRINLUUserDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *systemDialogActId;
@property (retain, nonatomic) USOSerializedGraph *reference;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSystemDialogActId:(id)a0 reference:(id)a1;

@end
