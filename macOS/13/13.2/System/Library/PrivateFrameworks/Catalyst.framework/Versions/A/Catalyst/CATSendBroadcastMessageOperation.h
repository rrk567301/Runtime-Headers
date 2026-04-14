@protocol CATSharingBroadcastPrimitives, CATDictionaryCodable;

@interface CATSendBroadcastMessageOperation : CATOperation {
    id<CATSharingBroadcastPrimitives> mBroadcastPrimitives;
    id<CATDictionaryCodable> mMessage;
}

- (void).cxx_destruct;
- (void)main;
- (BOOL)isAsynchronous;
- (void)sendMessage;
- (id)initWithBroadcastPrimitive:(id)a0 message:(id)a1;

@end
