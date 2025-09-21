@class NSString, WFWorkflowRecord;

@interface WFWorkflowConflict : NSObject

@property (copy, nonatomic) NSString *localWorkflowID;
@property (retain, nonatomic) WFWorkflowRecord *localWorkflowRecord;
@property (copy, nonatomic) NSString *remoteWorkflowID;
@property (retain, nonatomic) WFWorkflowRecord *remoteWorkflowRecord;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)resolutionKeepingLocal:(char)a0 keepingRemote:(char)a1;

@end
