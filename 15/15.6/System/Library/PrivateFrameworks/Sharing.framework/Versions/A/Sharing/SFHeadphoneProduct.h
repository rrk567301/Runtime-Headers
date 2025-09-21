@class NSString;

@interface SFHeadphoneProduct : NSObject

@property (class, readonly, nonatomic) SFHeadphoneProduct *airPods;
@property (class, readonly, nonatomic) SFHeadphoneProduct *airPodsSecondGeneration;
@property (class, readonly, nonatomic) SFHeadphoneProduct *airPodsPro;
@property (class, readonly, nonatomic) SFHeadphoneProduct *airPodsMax;
@property (class, readonly, nonatomic) SFHeadphoneProduct *b688;
@property (class, readonly, nonatomic) SFHeadphoneProduct *b698;
@property (class, readonly, nonatomic) SFHeadphoneProduct *b768e;
@property (class, readonly, nonatomic) SFHeadphoneProduct *b768m;
@property (class, readonly, nonatomic) SFHeadphoneProduct *beatsSolo;
@property (class, readonly, nonatomic) SFHeadphoneProduct *beatsSoloPro;
@property (class, readonly, nonatomic) SFHeadphoneProduct *beatsStudio;
@property (class, readonly, nonatomic) SFHeadphoneProduct *beatsX;
@property (class, readonly, nonatomic) SFHeadphoneProduct *beatsFlex;
@property (class, readonly, nonatomic) SFHeadphoneProduct *powerBeats3;
@property (class, readonly, nonatomic) SFHeadphoneProduct *powerBeats4;
@property (class, readonly, nonatomic) SFHeadphoneProduct *powerBeatsPro;
@property (class, readonly, nonatomic) SFHeadphoneProduct *b494;
@property (class, readonly, nonatomic) SFHeadphoneProduct *b507;
@property (class, readonly, nonatomic) SFHeadphoneProduct *b607;
@property (class, readonly, nonatomic) SFHeadphoneProduct *b453;
@property (class, readonly, nonatomic) SFHeadphoneProduct *b465;
@property (class, readonly, nonatomic) SFHeadphoneProduct *b487;
@property (class, readonly, nonatomic) SFHeadphoneProduct *b498;
@property (class, readonly, nonatomic) SFHeadphoneProduct *b463;

@property (nonatomic) unsigned int productID;
@property (nonatomic) unsigned int altProductID;
@property (nonatomic) unsigned long long model;
@property (copy, nonatomic) NSString *bluetoothModel;
@property (nonatomic) char supportsDigitalEngraving;
@property (nonatomic) char supportsMobileAsset;
@property (nonatomic) char supportsRepair;
@property (nonatomic) char supportsSiri;
@property (nonatomic) char supportsSpatialAudio;
@property (nonatomic) char supportsOptimizedBatteryCharging;
@property (nonatomic) char supportsWirelessSplitterInEar;
@property (nonatomic) char supportsFindMyNetwork;
@property (nonatomic) char supportsEndCallProx;
@property (nonatomic) char supportsMuteCallProx;
@property (nonatomic) char supportsAdaptiveControlsProx;
@property (nonatomic) char supportsCounterfeitDetection;
@property (nonatomic) char ignoresBatteryStatusIfCounterfeit;
@property (nonatomic) char showsStatus;
@property (nonatomic) char showsStatusOutOfCase;
@property (nonatomic) char hasAddressInAdvertisement;
@property (nonatomic) char hasW1Chip;
@property (nonatomic) char hasLid;
@property (nonatomic) char hasSplitBattery;
@property (nonatomic) char hasCaseWithoutBattery;
@property (nonatomic) unsigned long long buttonLocation;
@property (nonatomic) char usesProductCaseName;
@property (nonatomic) char hasSplitCaseColors;
@property (nonatomic) char isAirPods;
@property (nonatomic) char hasCaseBT;

- (void).cxx_destruct;
- (id)initWithBluetoothModel:(id)a0;
- (id)initWithModel:(unsigned long long)a0;
- (id)initWithProductID:(unsigned int)a0;
- (id)initWithProductID:(unsigned int)a0 supportsMobileAsset:(char)a1;

@end
