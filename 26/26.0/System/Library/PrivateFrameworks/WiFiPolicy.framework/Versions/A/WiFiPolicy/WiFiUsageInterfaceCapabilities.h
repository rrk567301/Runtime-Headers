@class NSString, NSSet;

@interface WiFiUsageInterfaceCapabilities : NSObject

@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) struct _Apple80211 { } *a11Ref;
@property (nonatomic) unsigned long long maxPHYRate;
@property (nonatomic) int supportedPhyModes;
@property (retain, nonatomic) NSSet *deviceCapabilities;

- (id)initWithInterfaceName:(id)a0;
- (void)dealloc;
- (unsigned long long)maxInterfacePHYRate;
- (unsigned long long)currentNumberOfSpatialStreams;
- (BOOL)deviceSupports:(int)a0;
- (id)description;
- (void).cxx_destruct;

@end
