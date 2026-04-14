@class QCDatagramReceiver, QCBooleanPort;

@interface QCOSCReceiver : QCOSCPatch {
    QCBooleanPort *outputSignal;
    QCDatagramReceiver *_receiver;
}

+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;

- (BOOL)setup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)cleanup:(id)a0;
- (void)setOscPortsConfiguration:(id)a0;
- (void)_receiverThread:(id)a0;

@end
