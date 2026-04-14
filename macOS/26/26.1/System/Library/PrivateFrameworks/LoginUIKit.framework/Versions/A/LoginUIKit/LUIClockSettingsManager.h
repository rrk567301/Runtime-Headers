@class NSMutableDictionary, LUIClockSettings;

@interface LUIClockSettingsManager : NSObject

@property (retain) NSMutableDictionary *clockSettings;
@property (readonly) LUIClockSettings *defaultClockSettings;

+ (id)sharedClockSettingsManager;

- (void).cxx_destruct;
- (id)init;
- (id)clockSettingsForUserWithGUID:(id)a0;

@end
