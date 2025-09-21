@class NSString, NSMapTable;
@protocol PCInterfaceUsabilityMonitorProtocol;

@interface PCInterfaceMonitor : NSObject <PCInterfaceUsabilityMonitorDelegate, PCInterfaceMonitorProtocol> {
    id<PCInterfaceUsabilityMonitorProtocol> _internal;
    NSMapTable *_delegateMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long interfaceIdentifier;
@property (readonly, nonatomic) int linkQuality;
@property (readonly, nonatomic) char isInterfaceUsable;
@property (readonly, nonatomic) char isInterfaceHistoricallyUsable;
@property (readonly, nonatomic) char isInternetReachable;
@property (readonly, retain, nonatomic) NSString *linkQualityString;
@property (readonly, nonatomic) char isPoorLinkQuality;
@property (readonly, nonatomic) char isBadLinkQuality;
@property (readonly, nonatomic) char isRadioHot;
@property (readonly, nonatomic) char isNetworkingPowerExpensiveToUse;
@property (readonly, nonatomic) long long interfaceConstraint;
@property (readonly, nonatomic) int currentRAT;
@property (readonly, nonatomic) char isLTEWithCDRX;
@property (readonly, nonatomic) unsigned long long interface5GMode;
@property (readonly, nonatomic) struct __CFString { } *wwanInterfaceName;
@property (readonly, nonatomic) NSString *networkCode;

+ (char)isNetworkingPowerExpensiveToUse;
+ (char)isBadLinkQuality:(int)a0;
+ (char)isPoorLinkQuality:(int)a0;
+ (id)sharedInstanceForIdentifier:(long long)a0;
+ (id)stringForLinkQuality:(int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (id)initWithInterfaceIdentifier:(long long)a0;
- (void)interfaceConstraintChanged:(id)a0;
- (void)interfaceLinkQualityChanged:(id)a0 previousLinkQuality:(int)a1;
- (void)interfaceRadioHotnessChanged:(id)a0;
- (void)interfaceReachabilityChanged:(id)a0;

@end
