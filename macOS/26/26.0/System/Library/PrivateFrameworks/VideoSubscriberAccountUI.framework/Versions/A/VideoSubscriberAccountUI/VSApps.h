@class NSArray;

@interface VSApps : NSObject

@property (retain, nonatomic) NSArray *nonChannelApps;
@property (retain, nonatomic) NSArray *availableApps;
@property (retain, nonatomic) NSArray *subscribedApps;
@property (nonatomic) BOOL hasUserChannelList;
@property (nonatomic) BOOL hasChannelApps;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
