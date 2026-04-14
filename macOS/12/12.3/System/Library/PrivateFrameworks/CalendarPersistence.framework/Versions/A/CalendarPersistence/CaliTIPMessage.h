@class NSString, ICSDocument, NSData, ICSEvent, CalDAVScheduleChangesProperty;

@interface CaliTIPMessage : NSObject <ETagObject> {
    NSData *_data;
    CalDAVScheduleChangesProperty *_scheduleChanges;
    NSString *_eTag;
    NSString *_filename;
    ICSDocument *_document;
    ICSEvent *_event;
}

@property BOOL localImport;
@property BOOL removeSchedulingIfNew;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)data;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)calendar;
- (id)event;
- (id)document;
- (id)filename;
- (id)initWithData:(id)a0 filename:(id)a1;
- (id)occurrences;
- (id)eTag;
- (id)masterEvent;
- (id)scheduleChanges;
- (id)serverFilename;
- (id)allOccurrences;
- (id)initWithData:(id)a0 filename:(id)a1 eTag:(id)a2 scheduleChanges:(id)a3;

@end
