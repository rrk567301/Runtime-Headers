@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MapsSuggestionsDonater : NSObject <MapsSuggestionsObject> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_closeTimer;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)donateSignalPack:(id)a0;
- (BOOL)donateFlightLookupWithFlightNumber:(id)a0 departureAirportCode:(id)a1 departureTime:(id)a2;
- (void).cxx_destruct;
- (BOOL)donateETA:(id)a0 entry:(id)a1;
- (id)init;
- (void)dealloc;

@end
