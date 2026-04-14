@class SCRCUserDefaults;

@interface SCRVisualsPreferences : NSObject

@property (retain, nonatomic, setter=_setUserDefaults:) SCRCUserDefaults *_userDefaults;
@property (nonatomic, setter=_setVisualsFontSize:) double _visualsFontSize;
@property (retain, nonatomic, setter=_setFontSizeObserver:) id _fontSizeObserver;
@property (nonatomic) double visualsFontSize;

- (id)initWithUserDefaults:(id)a0;
- (void).cxx_destruct;
- (void)setVisualsFontSizeValue:(id)a0;

@end
