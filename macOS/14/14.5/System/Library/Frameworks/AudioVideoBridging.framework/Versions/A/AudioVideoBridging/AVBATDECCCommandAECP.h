@class AVB17221AECPMessage, AVBAVDECCEntity;

@interface AVBATDECCCommandAECP : AVBATDECCCommandEvent

@property (retain, nonatomic) AVBAVDECCEntity *targetEntity;
@property (copy, nonatomic) AVB17221AECPMessage *commandMessage;
@property (copy, nonatomic) id /* block */ commandHandler;
@property (copy, nonatomic) AVB17221AECPMessage *recoveryMessage;
@property (copy, nonatomic) id /* block */ recoveryHandler;
@property (nonatomic) BOOL ignoreStatusError;

- (void).cxx_destruct;

@end
