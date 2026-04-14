@class NSMutableDictionary, LUIClockSettings;

@interface LUIClockSettingsManager : NSObject

@property (retain) NSMutableDictionary *clockSettings;
@property (readonly) LUIClockSettings *defaultClockSettings;

+ (id)sharedClockSettingsManager;

- (id)init;
- (void).cxx_destruct;
- (id)clockSettingsForUserWithGUID:(id)a0;

@end
