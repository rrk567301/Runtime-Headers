@class NSDictionary, SVXTargetLEDSupplier;

@interface SVXLEDStatusFactory : NSObject {
    NSDictionary *_statusLEDCommands;
    SVXTargetLEDSupplier *_targetLEDSupplier;
}

- (void).cxx_destruct;
- (id)init;
- (id)createClearLEDStatus;
- (id)createCommandForStatus:(id)a0;
- (id)createStatusForColor:(id)a0;

@end
