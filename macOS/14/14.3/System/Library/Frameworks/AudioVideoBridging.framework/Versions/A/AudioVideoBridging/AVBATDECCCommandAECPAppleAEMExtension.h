@class AVB17221AECPAppleAEMExtensionMessage, AVBAVDECCEntity;

@interface AVBATDECCCommandAECPAppleAEMExtension : AVBATDECCCommandEvent

@property (retain, nonatomic) AVBAVDECCEntity *targetEntity;
@property (copy, nonatomic) AVB17221AECPAppleAEMExtensionMessage *commandMessage;
@property (copy, nonatomic) id /* block */ commandHandler;
@property (copy, nonatomic) AVB17221AECPAppleAEMExtensionMessage *recoveryMessage;
@property (copy, nonatomic) id /* block */ recoveryHandler;
@property (nonatomic) BOOL ignoreStatusError;

- (void).cxx_destruct;

@end
