@class NSArray, NSDictionary;

@interface ICMusicAccountNotificationsSettingsResponse : NSObject {
    NSDictionary *_responseDictionary;
}

@property (readonly, nonatomic) NSArray *settingsSwitches;
@property (readonly, nonatomic) char wasSuccessful;

+ (id)createResponseBodyWithSwitches:(id)a0;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)a0;

@end
