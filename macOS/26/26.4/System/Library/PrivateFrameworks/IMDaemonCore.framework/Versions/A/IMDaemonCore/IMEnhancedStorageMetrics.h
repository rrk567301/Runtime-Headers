@interface IMEnhancedStorageMetrics : NSObject

@property unsigned long long numBatchMessages;
@property unsigned long long numBatchSets;
@property unsigned long long numReadReceipts;
@property unsigned long long numReadReceiptsV0;
@property unsigned long long numReadReceiptsV1;
@property unsigned long long numReadReceiptsV1NoQOI;
@property unsigned long long numReadReceiptsV1WithQOI;
@property unsigned long long numReadReceiptsV1WithQOINoChat;
@property unsigned long long numReadReceiptsV1WithQOINoDupe;
@property unsigned long long numReadReceiptsV1NoQOIMarkedMessageAfterInitial;
@property unsigned long long numChatsMarkedRead;
@property unsigned long long numChatsMarkedReadWithV0;
@property unsigned long long numChatsMarkedReadWithV1NoQOI;
@property unsigned long long numChatsMarkedReadWithV1WithQOI;
@property unsigned long long numSSMFallbackResets;
@property unsigned long long numReadReceiptsNoMessage;

- (void)reset;

@end
