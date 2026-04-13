@class CMIndoorOutdoorManagerInternal;
@protocol CMIndoorOutdoorDelegate;

@interface CMIndoorOutdoorManager : NSObject {
    CMIndoorOutdoorManagerInternal *_internal;
}

@property (weak, nonatomic) id<CMIndoorOutdoorDelegate> delegate;

+ (BOOL)isIndoorOutdoorStateAvailable;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)startIndoorOutdoorUpdates;
- (void)stopIndoorOutdoorUpdates;
- (void)lastKnownIndoorOutdoorStateWithHandler:(id /* block */)a0;

@end
