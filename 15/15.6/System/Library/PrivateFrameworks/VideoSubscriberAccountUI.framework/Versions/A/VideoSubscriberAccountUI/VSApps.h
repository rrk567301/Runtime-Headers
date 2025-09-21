@class NSArray;

@interface VSApps : NSObject

@property (retain, nonatomic) NSArray *nonChannelApps;
@property (retain, nonatomic) NSArray *availableApps;
@property (retain, nonatomic) NSArray *subscribedApps;
@property (nonatomic) char hasUserChannelList;
@property (nonatomic) char hasChannelApps;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
