@interface VUIUpNextConfig : NSObject

@property (nonatomic) unsigned long long upNextCallDelayAfterMarkAsWatched;
@property (nonatomic) unsigned long long upNextRefreshCallDelayAfterRemoveFromUpNext;

- (id)init;

@end
