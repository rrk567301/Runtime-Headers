@class NSString, MPRestrictionsMonitor;

@interface MusicKit_SoftLinking_MPRestrictionsMonitor : NSObject {
    MPRestrictionsMonitor *_underlyingRestrictionsMonitor;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPRestrictionsMonitor *sharedRestrictionsMonitor;
@property (class, readonly, nonatomic) NSString *allowsExplicitContentDidChangeNotification;
@property (class, readonly, nonatomic) NSString *allowsMusicVideosDidChangeNotification;

@property (readonly, nonatomic) char allowsDeletion;
@property (readonly, nonatomic) char allowsExplicitContent;
@property (readonly, nonatomic) char allowsMusicVideos;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleAllowsExplicitContentDidChangeNotification:(id)a0;
- (void)_handleAllowsMusicVideosDidChangeNotification:(id)a0;
- (id)_initWithUnderlyingRestrictionsMonitor:(id)a0;

@end
