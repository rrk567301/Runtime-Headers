@class NSXPCListener, NSArray, NSString;

@interface ATXSleepSuggestionServer : NSObject <NSXPCListenerDelegate, ATXSleepSuggestionInterface>

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSArray *events;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)isSleepScheduleBetweenTheBoundariesWithBedtime:(id)a0 wakeupTime:(id)a1;
- (id)init;
- (void)predictedSleepSuggestionWithCompletionHandler:(id /* block */)a0;
- (id)queryEvents;
- (id)initWithEvents:(id)a0;
- (void).cxx_destruct;

@end
