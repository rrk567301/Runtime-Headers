@interface _EARArtifact : NSObject {
    struct shared_ptr<quasar::artifact::Artifact> { struct Artifact *__ptr_; struct __shared_weak_count *__cntrl_; } _artifact;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)minimize;
- (BOOL)write:(id)a0;
- (id)getVersion;
- (BOOL)isEquivalentTo:(id)a0;
- (id)initWithAcceptedContent:(id)a0 acceptedInfo:(id)a1 dependent:(id)a2;
- (id)getLocale;
- (BOOL)supportsInfo:(id)a0;
- (BOOL)hasInfo:(id)a0;
- (id)getInfo:(id)a0;
- (BOOL)supportsContent:(id)a0;
- (BOOL)hasContent:(id)a0;
- (id)getContent:(id)a0;
- (BOOL)isMinimalistic;

@end
