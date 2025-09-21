@class NSUUID, PHASEExternalInputStreamDefinition;

@interface ManagedInputStream : NSObject

@property (nonatomic, getter=isStreamPaused) char streamPaused;
@property (retain, nonatomic) PHASEExternalInputStreamDefinition *definition;
@property (retain, nonatomic) NSUUID *attributedClientID;
@property (nonatomic) char canRecord;
@property (nonatomic) char isMuted;
@property (nonatomic) struct shared_ptr<caulk::synchronized<Phase::Controller::ExternalStreamFader>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } fader;
@property (nonatomic) char isFading;
@property (nonatomic) char shouldResumeWithSession;
@property (copy, nonatomic) id /* block */ pauseStateDidUpdateCallback;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithPaused:(char)a0 attributedTo:(id)a1 definition:(id)a2 canRecord:(char)a3 fader:(struct shared_ptr<caulk::synchronized<Phase::Controller::ExternalStreamFader>> { void *x0; struct __shared_weak_count *x1; })a4 pauseStateDidUpdateCallback:(id /* block */)a5;

@end
