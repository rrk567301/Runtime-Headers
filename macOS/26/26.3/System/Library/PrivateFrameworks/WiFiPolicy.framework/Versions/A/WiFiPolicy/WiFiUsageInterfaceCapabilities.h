@class NSString, NSSet;

@interface WiFiUsageInterfaceCapabilities : NSObject

@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) struct _Apple80211 { } *a11Ref;
@property (nonatomic) unsigned long long maxPHYRate;
@property (nonatomic) int supportedPhyModes;
@property (retain, nonatomic) NSSet *deviceCapabilities;

- (BOOL)deviceSupports:(int)a0;
- (id)description;
- (unsigned long long)maxInterfacePHYRate;
- (id)initWithInterfaceName:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)currentNumberOfSpatialStreams;

@end
