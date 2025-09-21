@class DURequestContentTypeObjC, NSString, _TtC21DocumentUnderstanding17DURequestStrategy;

@interface DURequestStrategyObjC : NSObject {
    _TtC21DocumentUnderstanding17DURequestStrategy *_underlyingStrategy;
    DURequestContentTypeObjC *_objCContentType;
}

@property (readonly, nonatomic) DURequestContentTypeObjC *contentType;
@property (copy, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) char preprocess;

- (void).cxx_destruct;
- (void)setContentType:(id)a0;
- (id)initWithContentType:(id)a0 preferredModelIdentifier:(id)a1 preprocess:(char)a2;

@end
