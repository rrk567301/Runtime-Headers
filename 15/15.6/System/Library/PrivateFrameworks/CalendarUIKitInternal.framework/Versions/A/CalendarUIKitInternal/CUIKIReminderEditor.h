@class NSString, _TtC21CalendarUIKitInternal33CUIKIReminderEditorImplementation;

@interface CUIKIReminderEditor : NSObject <CUIKEditorExtended> {
    _TtC21CalendarUIKitInternal33CUIKIReminderEditorImplementation *_reminderEditor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)saveCalendar:(id)a0 error:(id *)a1;
- (char)saveEvent:(id)a0 span:(long long)a1 error:(id *)a2;
- (char)calendarUsesEditor:(id)a0;
- (char)commitEventForOOPModificationRecording:(id)a0 error:(id *)a1;
- (void)deleteCalendar:(id)a0 forEntityType:(unsigned long long)a1;
- (void)deleteCalendars:(id)a0;
- (char)deleteEvent:(id)a0 span:(long long)a1 error:(id *)a2;
- (void)deleteEvents:(id)a0;
- (void)deleteEvents:(id)a0 span:(long long)a1;
- (void)deleteEvents:(id)a0 span:(long long)a1 result:(id /* block */)a2;
- (void)deleteSources:(id)a0;
- (char)eventUsesEditor:(id)a0;
- (void)performWithOptions:(id)a0 block:(id /* block */)a1;
- (void)saveCalendars:(id)a0;
- (void)saveChangesToEvents:(id)a0 impliedCommitDecision:(char)a1;
- (void)saveChangesToEvents:(id)a0 span:(long long)a1;
- (void)saveChangesToSources:(id)a0;
- (char)saveEventForOOPModificationRecording:(id)a0 span:(long long)a1 error:(id *)a2;
- (char)saveNewEvents:(id)a0 commit:(char)a1 error:(id *)a2;
- (void)saveNewSources:(id)a0 commit:(char)a1;
- (char)sourceUsesEditor:(id)a0;
- (char)_saveChangesToEvents:(id)a0 error:(id *)a1;
- (void)deleteEvents:(id)a0 resultHandler:(id /* block */)a1;
- (id)initWithEventStore:(id)a0 undoManager:(id)a1 alertDisplayer:(id)a2 pendingReminderTracker:(id)a3;

@end
