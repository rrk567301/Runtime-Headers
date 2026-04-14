@class NSArray, _TtC21DocumentUnderstanding8DUClient, _TtC21DocumentUnderstanding10DUResponse, NSError, _TtC21DocumentUnderstanding10DUDocument, _TtC21DocumentUnderstanding20DURequestContentType;

@interface DocumentUnderstanding.DURequest : NSObject {
    void /* function */ strategies;
}

@property (nonatomic, readonly) _TtC21DocumentUnderstanding8DUClient *client;
@property (nonatomic, readonly) _TtC21DocumentUnderstanding20DURequestContentType *contentType;
@property (nonatomic, readonly) NSArray *strategies;

- (id)init;
- (void).cxx_destruct;
- (void)executeWithDocument:(id)a0 completion:(id /* block */)a1;
- (void)executeWithResultWithDocument:(_TtC21DocumentUnderstanding10DUDocument *)a0 completionHandler:(void (^)(_TtC21DocumentUnderstanding10DUResponse *, NSError *))a1;
- (id)initWithClient:(id)a0 contentType:(id)a1 strategies:(id)a2;

@end
