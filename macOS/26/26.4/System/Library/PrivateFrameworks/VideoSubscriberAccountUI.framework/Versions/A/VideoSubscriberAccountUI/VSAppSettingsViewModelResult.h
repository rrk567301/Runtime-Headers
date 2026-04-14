@class NSArray;

@interface VSAppSettingsViewModelResult : NSObject

@property (copy, nonatomic) NSArray *availableAppViewModels;
@property (copy, nonatomic) NSArray *nonChannelAppViewModels;
@property (copy, nonatomic) NSArray *subscribedAppViewModels;

- (void).cxx_destruct;
- (id)init;

@end
