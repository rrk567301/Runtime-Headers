@class NSDictionary;

@interface VUITipKitConfig : NSObject

@property (nonatomic) BOOL isEnabled;
@property (nonatomic) long long displayFrequency;
@property (retain, nonatomic) NSDictionary *tipConfiguration;

- (void).cxx_destruct;
- (id)init;

@end
