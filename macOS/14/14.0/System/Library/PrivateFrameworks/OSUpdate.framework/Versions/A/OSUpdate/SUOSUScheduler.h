@class SUOSULaterObserver, SUOSUTonightObserver, SUOSUPowerEventObserver, SUOSUAppQuitObserver, SUOSUAlarmObserver;
@protocol SUOSULaterDelegate;

@interface SUOSUScheduler : NSObject

@property (retain) SUOSUTonightObserver *tonightObserver;
@property (retain) SUOSUAlarmObserver *oneHourObserver;
@property (retain) SUOSULaterObserver *armedObserver;
@property (retain) SUOSUPowerEventObserver *powerEventObserver;
@property (retain) SUOSUAppQuitObserver *appQuitObserver;
@property (retain) id<SUOSULaterDelegate> delegate;
@property unsigned long long mode;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)isArmed;
- (id)_eventNameWithMode:(unsigned long long)a0;
- (id)_observerForMachineCapabilitiesWithMode:(unsigned long long)a0;
- (void)armAppQuitObserverWithBundleIdentifiers:(id)a0;
- (void)armObserverWithMode:(unsigned long long)a0;
- (void)disarmAppQuitObserver;
- (void)disarmLaterObserver;
- (id)estimatedFireDate;

@end
