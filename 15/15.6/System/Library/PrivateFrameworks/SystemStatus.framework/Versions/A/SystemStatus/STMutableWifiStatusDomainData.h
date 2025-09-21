@class NSString;

@interface STMutableWifiStatusDomainData : STWifiStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (nonatomic, getter=isWifiActive) char wifiActive;
@property (nonatomic) unsigned long long signalStrengthBars;
@property (nonatomic, getter=isAssociatedToIOSHotspot) char associatedToIOSHotspot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSignalStrengthBars:(unsigned long long)a0;
- (void)setWifiActive:(char)a0;
- (char)applyDiff:(id)a0;
- (void)setAssociatedToIOSHotspot:(char)a0;

@end
