@class NSString, NSDate;

@interface MapsSuggestionsXPCActivityTimer : MapsSuggestionsBaseTrigger <MapsSuggestionsTimer> {
    id /* block */ _block;
    NSString *_activityIdentifier;
    NSDate *_firesAt;
    unsigned long long _estimatedDownloadInBytes;
    unsigned long long _estimatedUploadInBytes;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)initWithName:(id)a0 queue:(id)a1 timerReturningBlock:(id /* block */)a2;
- (void)unschedule;
- (id)initWithName:(id)a0 estimatedDownload:(unsigned long long)a1 estimatedUpload:(unsigned long long)a2 queue:(id)a3 block:(id /* block */)a4;
- (void)scheduleWithTimeInterval:(double)a0 repeatAfter:(double)a1 leeway:(double)a2;
- (void)scheduleWithTimeInterval:(double)a0 leeway:(double)a1;
- (id)initWithName:(id)a0 queue:(id)a1 block:(id /* block */)a2;
- (void)scheduleWithInterval:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x0; } x0; })a0 leeway:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x0; } x0; })a1;
- (void)scheduleWithInterval:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x0; } x0; })a0 repeatAfter:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x0; } x0; })a1 leeway:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x0; } x0; })a2;
- (id)objectForJSON;
- (void).cxx_destruct;

@end
