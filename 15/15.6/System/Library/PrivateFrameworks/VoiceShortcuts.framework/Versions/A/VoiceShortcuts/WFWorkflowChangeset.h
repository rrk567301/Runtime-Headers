@class NSSet;

@interface WFWorkflowChangeset : NSObject

@property (readonly, nonatomic) NSSet *modified;
@property (readonly, nonatomic) NSSet *inserted;
@property (readonly, nonatomic) NSSet *removed;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEmpty;
- (id)changesetForVisibleWorkflows;
- (id)initWithModifiedWorkflows:(id)a0 insertedWorkflows:(id)a1 removedWorkflows:(id)a2;

@end
