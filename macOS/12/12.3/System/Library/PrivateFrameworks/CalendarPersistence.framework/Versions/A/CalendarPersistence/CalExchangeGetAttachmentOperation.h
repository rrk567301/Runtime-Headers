@class NSArray, NSManagedObjectID;

@interface CalExchangeGetAttachmentOperation : CalExchangeOperation <CalMessageTraceableOpearation> {
    NSArray *_attachmentIDs;
    NSManagedObjectID *_calendarItemObjectID;
}

- (void)dealloc;
- (id)debugDescription;
- (id)debugTitle;
- (BOOL)executeWithBinding:(id)a0 inSession:(id)a1 inContext:(id)a2 error:(id *)a3;
- (id)messageTracerName;
- (id)messageTracerUUID;
- (id)initWithSession:(id)a0 attachmentIDs:(id)a1 forCalendarItem:(id)a2;

@end
