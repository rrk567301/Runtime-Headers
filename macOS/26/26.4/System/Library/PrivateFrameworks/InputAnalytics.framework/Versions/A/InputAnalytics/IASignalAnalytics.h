@interface IASignalAnalytics : IAXPCSPIObject

+ (void)sendSignal:(id)a0 toChannel:(id)a1 withPayload:(id)a2;
+ (void)sendSignal:(id)a0 toChannel:(id)a1 withUniqueStringID:(id)a2 withPayload:(id)a3;
+ (id)actionQueue;
+ (void)asyncSendSignal:(id)a0 toChannel:(id)a1 withNullableUniqueStringID:(id)a2 withPayload:(id)a3;
+ (void)sendSignal:(id)a0 toChannel:(id)a1 withNullableUniqueStringID:(id)a2 withPayload:(id)a3;
+ (void)asyncSendSignal:(id)a0 toChannel:(id)a1 withNullableSessionID:(id)a2 withPayload:(id)a3;
+ (void)sendSignal:(id)a0 toChannel:(id)a1 withNullableSessionID:(id)a2 withPayload:(id)a3;
+ (void)sendSignal:(id)a0 toChannel:(id)a1 withSessionID:(id)a2 withPayload:(id)a3;

@end
