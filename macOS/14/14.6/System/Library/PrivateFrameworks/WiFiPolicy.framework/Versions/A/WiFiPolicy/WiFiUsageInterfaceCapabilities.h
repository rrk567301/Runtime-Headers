@class NSString;

@interface WiFiUsageInterfaceCapabilities : NSObject

@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) struct _Apple80211 { } *a11Ref;
@property (nonatomic) unsigned long long maxPHYRate;
@property (nonatomic) unsigned long long maxNumberOfSpatialStreams;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInterfaceName:(id)a0;
- (unsigned long long)maxInterfaceNumberOfSpatialStreams;
- (unsigned long long)maxInterfacePHYRate;

@end
