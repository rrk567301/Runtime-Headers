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

- (BOOL)hasObservers;
- (void)considerMyNewLocation:(id)a0;
- (void)onStopImplementation;
- (id)initWithName:(id)a0 queue:(id)a1;
- (void)awaitQueue;
- (id)dispatchQueue;
- (unsigned long long)countLocationObservers;
- (void)considerMyNewVisit:(id)a0;
- (void).cxx_destruct;
- (void)stopLocationUpdatesForDelegate:(id)a0;
- (id)restartLocationUpdatesForDelegate:(id)a0;
- (void)dealloc;
- (void)considerMyAllowanceAsLimited:(BOOL)a0;
- (void)onStartImplementation;
- (id)startLocationUpdatesForDelegate:(id)a0;
- (id).cxx_construct;

@end
