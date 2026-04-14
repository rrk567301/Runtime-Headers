@class NSManagedObjectID;

@interface CalExchangeCreateTaskOperation : CalExchangeAbstractWriteCalendarItemOperation <CalWriteCalendarItemOperation, CalRevertableOperation, CalMessageTraceableOpearation> {
    NSManagedObjectID *_taskID;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectID;
- (id)createRevertOperationInContext:(id)a0 inSession:(id)a1;
- (BOOL)shouldDeletePendingOperation:(id)a0;
- (id)debugTitle;
- (BOOL)executeWithBinding:(id)a0 inSession:(id)a1 inContext:(id)a2 error:(id *)a3;
- (id)messageTracerName;
- (id)messageTracerUUID;
- (id)initWithSessionID:(id)a0 taskID:(id)a1;

@end
