@class CATRemoteTransport, CATMessage;

@interface _CATRemoteTransportSendMessageOperation : CATOperation

@property (weak, nonatomic) CATRemoteTransport *transport;
@property (retain, nonatomic) CATMessage *message;

- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (void)didFailWithError:(id)a0;
- (void)didEncodeData:(id)a0;
- (void)didSendData;

@end
