@class NSDictionary, NSManagedObjectID;

@interface CalExchangeUpdateCalendarItemOperation : CalExchangeAbstractWriteCalendarItemOperation <CalWriteEventOperation, CalRevertableOperation, CalMessageTraceableOpearation> {
    NSDictionary *_changedValues;
    BOOL _shouldSendInvitation;
}

@property (readonly) NSManagedObjectID *eventID;

+ (BOOL)supportsSecureCoding;
+ (void)addSetItemFieldWithExtendedPropertyName:(id)a0 forEvent:(id)a1 locationValue:(id)a2 to:(id)a3;

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
- (BOOL)_shouldUpdateRecurrence;
- (BOOL)changesShouldBeSentToAllAttendees;
- (id)initWithSessionID:(id)a0 eventID:(id)a1 changedValues:(id)a2 shouldSendInvitation:(BOOL)a3;

@end
