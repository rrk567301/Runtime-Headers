@class CATRemoteTransport, CATMessage;

@interface _CATRemoteTransportSendMessageOperation : CATOperation

@property (weak, nonatomic) CATRemoteTransport *transport;
@property (retain, nonatomic) CATMessage *message;

- (void)main;
- (BOOL)isAsynchronous;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;
- (void)didEncodeData:(id)a0;
- (void)didSendData;

@end
