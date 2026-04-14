@class CATXPCTransport, CATMessage;

@interface _CATXPCTransportSendMessageOperation : CATOperation

@property (weak, nonatomic) CATXPCTransport *transport;
@property (retain, nonatomic) CATMessage *message;

- (void)main;
- (BOOL)isAsynchronous;
- (void)didProcessMessage;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
