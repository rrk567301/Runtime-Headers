@protocol CATSharingDeviceSession, CATDictionaryCodable;

@interface CATSendDeviceSessionMessageOperation : CATOperation {
    id<CATSharingDeviceSession> mDeviceSession;
    id<CATDictionaryCodable> mMessage;
}

- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (id)initWithDeviceSession:(id)a0 message:(id)a1;
- (void)sendMessage;

@end
