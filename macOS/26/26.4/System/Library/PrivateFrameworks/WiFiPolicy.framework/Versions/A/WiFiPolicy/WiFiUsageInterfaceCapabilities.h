@class NSString, NSSet;

@interface WiFiUsageInterfaceCapabilities : NSObject

@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) struct _Apple80211 { } *a11Ref;
@property (nonatomic) unsigned long long maxPHYRate;
@property (nonatomic) int supportedPhyModes;
@property (retain, nonatomic) NSSet *deviceCapabilities;

- (id)initWithInterfaceName:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)currentNumberOfSpatialStreams;
- (id)description;
- (unsigned long long)maxInterfacePHYRate;
- (BOOL)deviceSupports:(int)a0;
- (void)dealloc;

@end
