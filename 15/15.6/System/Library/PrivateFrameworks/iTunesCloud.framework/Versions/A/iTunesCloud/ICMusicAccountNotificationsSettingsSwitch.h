@class NSString, NSDictionary, NSMutableDictionary;

@interface ICMusicAccountNotificationsSettingsSwitch : NSObject {
    NSMutableDictionary *_valueDictionary;
    char _isToggled;
    char _hasBeenPreviouslyToggled;
}

@property (nonatomic) char isToggled;
@property (readonly, nonatomic) char hasBeenPreviouslyToggled;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *itemResponseDictionary;

- (void).cxx_destruct;
- (id)initWithItemResponseDictionary:(id)a0;
- (id)initWithToggleState:(char)a0 hasBeenToggled:(char)a1 identifier:(id)a2;
- (void)setHasBeenPreviouslyToggled:(char)a0;

@end
