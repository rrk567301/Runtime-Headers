@class NSUUID, USOSerializedGraph;

@interface SIRINLUUserWantedToPause : NSObject <SIRINLUUserDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *taskId;
@property (retain, nonatomic) USOSerializedGraph *reference;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithReference:(id)a0;
- (id)initWithTaskId:(id)a0 reference:(id)a1;

@end
