@class NSDictionary, NSManagedObjectID;

@interface CalExchangeUpdateFolderOperation : CalExchangePersistentOperation <CalRevertableOperation, CalMessageTraceableOpearation> {
    NSDictionary *_changedValues;
}

@property (readonly) NSManagedObjectID *calendarID;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createRevertOperationInContext:(id)a0 inSession:(id)a1;
- (BOOL)shouldDeletePendingOperation:(id)a0;
- (id)debugTitle;
- (BOOL)executeWithBinding:(id)a0 inSession:(id)a1 inContext:(id)a2 error:(id *)a3;
- (id)messageTracerName;
- (id)messageTracerUUID;
- (id)initWithSessionID:(id)a0 calendarID:(id)a1 changedValues:(id)a2;

@end
