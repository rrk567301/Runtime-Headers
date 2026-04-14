@class AVB17221ACMPMessage, AVBAVDECCEntity;

@interface AVBATDECCCommandACMP : AVBATDECCCommandEvent

@property (retain, nonatomic) AVBAVDECCEntity *targetEntity;
@property (copy, nonatomic) AVB17221ACMPMessage *commandMessage;
@property (copy, nonatomic) id /* block */ commandHandler;
@property (copy, nonatomic) AVB17221ACMPMessage *recoveryMessage;
@property (copy, nonatomic) id /* block */ recoveryHandler;

- (void).cxx_destruct;

@end
