@class NSArray;

@interface VSAppSettingsViewModelResult : NSObject

@property (copy, nonatomic) NSArray *channelAppViewModels;
@property (copy, nonatomic) NSArray *nonChannelAppViewModels;

- (id)init;
- (void).cxx_destruct;

@end
