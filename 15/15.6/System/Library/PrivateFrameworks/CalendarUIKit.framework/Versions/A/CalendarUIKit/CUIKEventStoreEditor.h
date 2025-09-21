@class NSString, NSObject;
@protocol OS_os_log;

@interface CUIKEventStoreEditor : NSObject <CUIKEditor>

@property (readonly, nonatomic) NSObject<OS_os_log> *logHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)saveCalendar:(id)a0 error:(id *)a1;
- (char)saveEvent:(id)a0 span:(long long)a1 error:(id *)a2;
- (char)_saveEvent:(id)a0 span:(long long)a1 commit:(char)a2 error:(id *)a3;
- (char)commitEventForOOPModificationRecording:(id)a0 error:(id *)a1;
- (void)deleteCalendar:(id)a0 forEntityType:(unsigned long long)a1;
- (char)deleteEvent:(id)a0 span:(long long)a1 error:(id *)a2;
- (void)deleteEvents:(id)a0 span:(long long)a1;
- (void)deleteEvents:(id)a0 span:(long long)a1 result:(id /* block */)a2;
- (void)performWithOptions:(id)a0 block:(id /* block */)a1;
- (void)saveChangesToEvents:(id)a0 span:(long long)a1;
- (char)saveEventForOOPModificationRecording:(id)a0 span:(long long)a1 error:(id *)a2;
- (char)saveNewEvents:(id)a0 commit:(char)a1 error:(id *)a2;

@end
