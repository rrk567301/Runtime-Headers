@class NSString, _TtC21DocumentUnderstanding20DURequestContentType;

@interface DocumentUnderstanding.DURequestStrategy : NSObject {
    void /* function */ modelIdentifier;
}

@property (nonatomic, retain) _TtC21DocumentUnderstanding20DURequestContentType *contentType;
@property (nonatomic, copy) NSString *modelIdentifier;
@property (nonatomic) BOOL preprocess;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContentType:(id)a0 preferredModelIdentifier:(id)a1 preprocess:(BOOL)a2;

@end
