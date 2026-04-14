@class NSString, MapsSuggestionsObservers, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsBaseLocationUpdater : NSObject <MapsSuggestionsLocationUpdater> {
    NSString *_name;
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    MapsSuggestionsObservers *_locationObservers;
    MapsSuggestionsObservers *_visitObservers;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithName:(id)a0 queue:(id)a1;
- (void)considerMyNewVisit:(id)a0;
- (void)awaitQueue;
- (BOOL)hasObservers;
- (id)startLocationUpdatesForDelegate:(id)a0;
- (id).cxx_construct;
- (void)stopLocationUpdatesForDelegate:(id)a0;
- (unsigned long long)countLocationObservers;
- (void)onStartImplementation;
- (void)dealloc;
- (void)considerMyNewLocation:(id)a0;
- (id)dispatchQueue;
- (void)onStopImplementation;
- (void)considerMyAllowanceAsLimited:(BOOL)a0;
- (void).cxx_destruct;
- (id)restartLocationUpdatesForDelegate:(id)a0;

@end
