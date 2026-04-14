@class CMIndoorOutdoorManagerInternal;
@protocol CMIndoorOutdoorDelegate;

@interface CMIndoorOutdoorManager : NSObject {
    CMIndoorOutdoorManagerInternal *_internal;
}

@property (weak, nonatomic) id<CMIndoorOutdoorDelegate> delegate;

+ (BOOL)isIndoorOutdoorStateAvailable;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)lastKnownIndoorOutdoorStateWithHandler:(id /* block */)a0;
- (void)startIndoorOutdoorUpdates;
- (void)stopIndoorOutdoorUpdates;

@end
