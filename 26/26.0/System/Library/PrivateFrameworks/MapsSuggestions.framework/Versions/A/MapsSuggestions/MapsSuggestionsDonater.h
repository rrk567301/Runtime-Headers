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

- (void)dealloc;
- (id)init;
- (BOOL)donateETA:(id)a0 entry:(id)a1;
- (BOOL)donateFlightLookupWithFlightNumber:(id)a0 departureAirportCode:(id)a1 departureTime:(id)a2;
- (BOOL)donateSignalPack:(id)a0;
- (void).cxx_destruct;

@end
