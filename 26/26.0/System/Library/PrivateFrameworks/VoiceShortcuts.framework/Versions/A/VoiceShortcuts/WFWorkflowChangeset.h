@class NSSet;

@interface WFWorkflowChangeset : NSObject

@property (readonly, nonatomic) NSSet *modified;
@property (readonly, nonatomic) NSSet *inserted;
@property (readonly, nonatomic) NSSet *removed;

- (BOOL)isEmpty;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)changesetForVisibleWorkflows;
- (id)initWithModifiedWorkflows:(id)a0 insertedWorkflows:(id)a1 removedWorkflows:(id)a2;

@end
