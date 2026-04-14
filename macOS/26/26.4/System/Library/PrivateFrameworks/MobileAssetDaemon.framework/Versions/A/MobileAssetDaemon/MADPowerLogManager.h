@interface MADPowerLogManager : NSObject

@property (nonatomic) struct PPSTelemetryIdentifier { } *autoDownloads;
@property (nonatomic) struct PPSTelemetryIdentifier { } *v2Downloads;

+ (id)sharedManager;
+ (struct PPSTelemetryIdentifier { } *)_retrieveSpecificIdentifier:(id)a0 andCategory:(id)a1;
+ (void)sendTelemetry:(id)a0 forCategory:(id)a1 withPayload:(id)a2;

@end
