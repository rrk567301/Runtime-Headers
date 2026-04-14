@class NSArray;

@interface VSApps : NSObject

@property (retain, nonatomic) NSArray *nonChannelApps;
@property (retain, nonatomic) NSArray *availableApps;
@property (retain, nonatomic) NSArray *subscribedApps;
@property (nonatomic) BOOL hasUserChannelList;
@property (nonatomic) BOOL hasChannelApps;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
