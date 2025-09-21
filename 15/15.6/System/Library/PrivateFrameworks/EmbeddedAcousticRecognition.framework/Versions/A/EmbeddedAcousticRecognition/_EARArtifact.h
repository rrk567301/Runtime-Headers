@interface _EARArtifact : NSObject {
    struct shared_ptr<quasar::artifact::Artifact> { struct Artifact *__ptr_; struct __shared_weak_count *__cntrl_; } _artifact;
}

+ (void)initialize;
+ (char)isValid:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (char)write:(id)a0;
- (void)minimize;
- (id)getInfo:(id)a0;
- (id)getVersion;
- (char)isEquivalentTo:(id)a0;
- (id)getContent:(id)a0;
- (id)getLocale;
- (char)hasContent:(id)a0;
- (char)hasInfo:(id)a0;
- (id)initWithAcceptedContent:(id)a0 acceptedInfo:(id)a1 dependent:(id)a2;
- (char)isMinimalistic;
- (char)supportsContent:(id)a0;
- (char)supportsInfo:(id)a0;

@end
