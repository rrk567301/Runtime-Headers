@class NSUUID, PHASEEngine;
@protocol PHASEExternalStreamDelegate;

@interface PHASEExternalStream : NSObject {
    NSUUID *_streamGroupUUID;
    NSUUID *_streamUUID;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _invalidated;
    PHASEEngine *_engine;
}

@property (readonly, nonatomic) char paused;
@property (readonly, nonatomic) unsigned int latencyInFrames;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, weak, nonatomic) id<PHASEExternalStreamDelegate> delegate;

+ (id)new;
+ (id)newUUID;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (id)engine;
- (id)streamUUID;
- (void)stopAndInvalidate;
- (id)initWithEngine:(id)a0 streamGroupUUID:(id)a1 streamUUID:(id)a2 startsPaused:(char)a3 delegate:(id)a4;
- (void)setPause:(char)a0 completion:(id /* block */)a1;

@end
