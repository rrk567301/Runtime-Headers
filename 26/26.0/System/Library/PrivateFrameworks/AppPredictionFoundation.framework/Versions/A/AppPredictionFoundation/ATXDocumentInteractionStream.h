@class NSString;

@interface ATXDocumentInteractionStream : NSObject <ATXGenericEventStreamBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_documentInteractionPublisherWithStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2;
- (void)enumerateDocumentInteractionEventsFromStartDate:(id)a0 endDate:(id)a1 filterBlock:(id /* block */)a2 limit:(unsigned long long)a3 block:(id /* block */)a4;
- (id)getDocumentsOpenedInLastMonth;

@end
