@class NSString, NSObservableDefaults;

@interface LUIClockSettingsMonitor : NSObject

@property (retain) NSObservableDefaults *defaultsObserver;
@property (readonly) NSString *userGUID;

- (void).cxx_destruct;
- (void)_clockFontIdentifierChanged:(id)a0;
- (void)_clockFontWeightChanged:(id)a0;
- (id)_clockSettings;
- (void)_numberSystemChanged:(id)a0;
- (void)_show24HourTimeChanged:(id)a0;
- (void)_startMonitors;
- (void)_usesLargeDateTimeChanged:(id)a0;
- (id)initWithUserGUID:(id)a0;

@end
