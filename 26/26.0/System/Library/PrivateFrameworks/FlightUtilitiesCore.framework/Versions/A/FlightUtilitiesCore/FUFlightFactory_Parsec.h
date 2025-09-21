@class NSString;

@interface FUFlightFactory_Parsec : FUFlightFactory <FUFlightFactoryInternalProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchUpdateForChannelId:(id)a0 completionHandler:(id /* block */)a1;
+ (void)gRPCQuery:(id)a0 date:(id)a1 bundleIdentifier:(id)a2 completionHandler:(id /* block */)a3;
+ (void)httpQuery:(id)a0 date:(id)a1 bundleIdentifier:(id)a2 userAgent:(id)a3 sessionID:(id)a4 completionHandler:(id /* block */)a5;
+ (void)loadFlightStructuresWithFlightNumber:(unsigned long long)a0 airlineCode:(id)a1 date:(id)a2 dateType:(long long)a3 userAgent:(id)a4 sessionID:(id)a5 completionHandler:(id /* block */)a6;
+ (void)loadFlightsWithNumber:(unsigned long long)a0 airlineCode:(id)a1 date:(id)a2 dateType:(long long)a3 userAgent:(id)a4 sessionID:(id)a5 completionHandler:(id /* block */)a6;
+ (void)subscribeToUpdatesForFlightsWithNumber:(unsigned long long)a0 airlineCode:(id)a1 date:(id)a2 completionHandler:(id /* block */)a3;
+ (void)subscribeToUpdatesForFlightsWithNumber:(unsigned long long)a0 airlineCode:(id)a1 date:(id)a2 updatesHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
+ (id)unsubscribeFromFlightUpdateChannel:(id)a0;
+ (id)validatedFlightNumber:(unsigned long long)a0 airlineCode:(id)a1 error:(id *)a2;


@end
