@class _TtC21DocumentUnderstanding9DURequest;

@interface DURequestObjC : NSObject {
    _TtC21DocumentUnderstanding9DURequest *_underlyingRequest;
}

- (void).cxx_destruct;
- (id)initWithClient:(id)a0 contentType:(id)a1 strategies:(id)a2;
- (void)executeWithDocument:(id)a0 completion:(id /* block */)a1;

@end
