@class NSString, NSSet;

@interface WiFiUsageInterfaceCapabilities : NSObject

@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) struct _Apple80211 { } *a11Ref;
@property (nonatomic) unsigned long long maxPHYRate;
@property (nonatomic) int supportedPhyModes;
@property (retain, nonatomic) NSSet *deviceCapabilities;

- (id)initWithInterfaceName:(id)a0;
- (BOOL)deviceSupports:(int)a0;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)currentNumberOfSpatialStreams;
- (unsigned long long)maxInterfacePHYRate;
- (void)dealloc;

@end
