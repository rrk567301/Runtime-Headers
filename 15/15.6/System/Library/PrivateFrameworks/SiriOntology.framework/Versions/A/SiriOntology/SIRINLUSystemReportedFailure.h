@class NSUUID, USOSerializedGraph, NSString;

@interface SIRINLUSystemReportedFailure : NSObject <SIRINLUSystemDialogAct>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSUUID *taskId;
@property (retain, nonatomic) USOSerializedGraph *reason;
@property (retain, nonatomic) USOSerializedGraph *task;
@property (retain, nonatomic) NSString *renderedText;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTaskId:(id)a0 reason:(id)a1 task:(id)a2;

@end
