@class ICAttributionLayoutManager;

@interface ICAttributionsUpdater : NSObject {
    void /* unknown type, empty encoding */ filter;
}

@property (class, nonatomic, readonly) double sidebarOpenedRenderDelay;
@property (class, nonatomic, readonly) double sidebarClosedRenderDelay;

@property (nonatomic, readonly) ICAttributionLayoutManager *layoutManager;
@property (nonatomic) BOOL isSidebarHidden;

- (id)init;
- (void).cxx_destruct;

@end
