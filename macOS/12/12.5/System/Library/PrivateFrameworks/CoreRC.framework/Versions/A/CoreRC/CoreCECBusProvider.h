@class CECBusPollingOperation, NSString, CECInterface;

@interface CoreCECBusProvider : CoreCECBus <CECInterfaceDelegate, CECBusPollingOperationDelegate> {
    BOOL _realHasLink;
}

@property (readonly, retain, nonatomic) CECInterface *interface;
@property (retain, nonatomic) CECBusPollingOperation *pollingOperation;
@property (readonly, nonatomic) BOOL deferLossOfLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)initWithInterface:(id)a0;
- (BOOL)sendMessage:(id)a0 error:(id *)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)propertyForKey:(id)a0 error:(id *)a1;
- (void)updateAllowHibernation;
- (void)willRemoveDevice:(id)a0;
- (id)initWithBus:(id)a0;
- (id)initWithLinkState:(BOOL)a0 physicalAddress:(unsigned long long)a1;
- (void)didChangeLinkState:(BOOL)a0 physicalAddress:(unsigned long long)a1;
- (void)setOsdNameASCII:(struct CECOSDName { unsigned char x0; unsigned char x1[14]; })a0;
- (void)setTvLanguageCodeASCII:(struct CECLanguage { unsigned char x0[3]; })a0;
- (id)addDeviceWithAttributes:(id)a0 error:(id *)a1;
- (void)setLinkState:(BOOL)a0 physicalAddress:(unsigned long long)a1;
- (void)setStreamPath:(unsigned long long)a0;
- (void)setSystemAudioModeStatus:(unsigned long long)a0;
- (id)addDeviceWithLogicalAddress:(unsigned char)a0 physicalAddress:(unsigned long long)a1 attributes:(id)a2 message:(id)a3 reason:(unsigned long long)a4;
- (void)interfacePropertiesChanged:(id)a0;
- (void)interface:(id)a0 receivedFrame:(struct CECFrame { unsigned char x0[16]; unsigned char x1 : 5; unsigned char x2 : 3; })a1;
- (void)interface:(id)a0 hibernationChanged:(BOOL)a1;
- (void)setActiveSource:(id)a0;
- (void)_changeActiveSourceFrom:(id)a0 to:(id)a1;
- (id)addDeviceWithLogicalAddress:(unsigned char)a0 message:(id)a1 reason:(unsigned long long)a2;
- (BOOL)sendMessage:(id)a0 withRetryCount:(unsigned char)a1 error:(id *)a2;
- (id)_cecErrorWithError:(id)a0 fromInterface:(id)a1;
- (BOOL)receivedMessage:(id)a0;
- (id)destinationExpectedForMessage:(id)a0;
- (BOOL)_sendMessage:(id)a0 toDevice:(id)a1 withRetryCount:(unsigned char)a2 error:(id *)a3;
- (id)destinationConfirmedForMessage:(id)a0;
- (BOOL)pollingOperation:(id)a0 shouldSkipAddress:(unsigned char)a1;
- (void)pollingOperationCompleted:(id)a0;
- (void)pollingOperation:(id)a0 deviceNotRespondingAtAddress:(unsigned char)a1;
- (void)pollingOperation:(id)a0 encounteredError:(id)a1 forMessage:(id)a2;
- (BOOL)refreshDevicesWithInitiator:(id)a0 error:(id *)a1;
- (void)makeDeviceInactiveSource:(id)a0;
- (unsigned char)arcTxAddressForArcRxDevice:(id)a0;

@end
