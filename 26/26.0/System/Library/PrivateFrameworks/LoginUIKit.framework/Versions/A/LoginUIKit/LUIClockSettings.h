@class NSString, NSMutableDictionary;

@interface LUIClockSettings : NSObject

@property (retain) NSMutableDictionary *clockSettings;
@property (readonly) BOOL isReadWrite;
@property (readonly) NSString *guid;
@property (retain) NSString *bigClockFontIdentifier;
@property (readonly) NSString *bigClockFontName;
@property double bigClockFontWeight;
@property (retain) NSString *numberingSystem;
@property BOOL showsBigClock;
@property BOOL shows24HourTime;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_clockSettingsFromURL:(id)a0;
- (id)_clockSettingsURL;
- (id)_defaultClockSettings;
- (id)_wallpapersURL;
- (void)_writeClockSettings:(id)a0;
- (id)initWithUserGUID:(id)a0;

@end
