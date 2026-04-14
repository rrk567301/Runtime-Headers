@class CATMessage;
@protocol CATSharingConnection;

@interface CATSharingServiceTransportSendMessageOperation : CATOperation {
    id<CATSharingConnection> mConnection;
    CATMessage *mMessage;
}

- (BOOL)isAsynchronous;
- (void)cancel;
- (void)main;
- (void).cxx_destruct;
- (void)didSendMessageWithError:(id)a0;
- (id)initWithConnection:(id)a0 message:(id)a1;
- (void)sendMessage;

@end
