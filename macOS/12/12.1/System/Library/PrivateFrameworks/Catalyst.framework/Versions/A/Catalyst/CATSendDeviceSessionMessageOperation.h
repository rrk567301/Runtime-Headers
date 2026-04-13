@protocol CATSharingDeviceSession, CATDictionaryCodable;

@interface CATSendDeviceSessionMessageOperation : CATOperation {
    id<CATSharingDeviceSession> mDeviceSession;
    id<CATDictionaryCodable> mMessage;
}

- (void).cxx_destruct;
- (void)main;
- (BOOL)isAsynchronous;
- (void)sendMessage;
- (id)initWithDeviceSession:(id)a0 message:(id)a1;

@end
