@class NSString;

@interface HMMManagedEphemeralContainer : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic) double startTime;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) NSString *containerName;
@property (readonly, nonatomic) double activeDuration;

- (void).cxx_destruct;
- (id)initWithContainerName:(id)a0;

@end
