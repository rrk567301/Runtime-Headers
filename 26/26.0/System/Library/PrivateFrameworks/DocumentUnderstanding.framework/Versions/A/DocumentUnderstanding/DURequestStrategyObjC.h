@class DURequestContentTypeObjC, NSString, _TtC21DocumentUnderstanding17DURequestStrategy;

@interface DURequestStrategyObjC : NSObject {
    _TtC21DocumentUnderstanding17DURequestStrategy *_underlyingStrategy;
    DURequestContentTypeObjC *_objCContentType;
}

@property (readonly, nonatomic) DURequestContentTypeObjC *contentType;
@property (copy, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) BOOL preprocess;

- (void)setContentType:(id)a0;
- (void).cxx_destruct;
- (id)initWithContentType:(id)a0 preferredModelIdentifier:(id)a1 preprocess:(BOOL)a2;

@end
