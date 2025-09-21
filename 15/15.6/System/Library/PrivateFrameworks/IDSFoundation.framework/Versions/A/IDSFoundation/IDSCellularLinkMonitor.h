@class NSString, NSMutableDictionary, NSHashTable;

@interface IDSCellularLinkMonitor : NSObject {
    NSString *_dataIndicator;
    NSHashTable *_cellularLinkDelegates;
    NSMutableDictionary *_notificationRegInfo;
    unsigned int _remoteDeviceVersion;
}

@property (readonly) char dataUsable;
@property (readonly) NSString *cellularDataInterfaceName;
@property (readonly) unsigned int radioAccessTechnology;
@property (readonly) unsigned int cellularMTU;
@property (readonly) unsigned int dataSoMaskBits;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)_setupCTServerConnection;
- (char)_updateCellularDataInterface:(char)a0;
- (char)_updateCellularMTU;
- (char)_updateDataBearerSoMask;
- (void)_updateDataStatus;
- (char)_updateRadioAccessTechnology;
- (void)addCellularLinkDelegate:(id)a0;
- (void)currentCellularSignalStrength:(int *)a0 signalStrength:(int *)a1 signalGrade:(int *)a2;
- (char)dropIPPackets:(id)a0 localAddress:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1 remoteAddress:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a2 isRelay:(char)a3 channelNumberMSB:(unsigned char)a4 ifname:(id)a5;
- (char)isSlicedCellularInterfaceActive:(id)a0;
- (void)registerCellularDataStatusNotification:(char)a0;
- (void)removeCellularLinkDelegate:(id)a0;
- (void)removePacketNotificationFilter;
- (char)setPacketNotificationFilter:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0 remote:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1 uniqueTag:(unsigned int)a2 callType:(unsigned char)a3 ifname:(id)a4;
- (void)setRemoteDeviceVersion:(unsigned int)a0;
- (void)updateProtocolQualityOfService:(char)a0 localAddress:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1;

@end
