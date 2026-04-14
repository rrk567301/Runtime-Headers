@class PKRecognitionSessionManager;

@interface PKQuery : NSObject

@property (weak, nonatomic) PKRecognitionSessionManager *sessionManager;
@property (weak, nonatomic) id delegate;

- (void).cxx_destruct;
- (void)start;
- (void)pause;
- (void)teardown;
- (id)initWithRecognitionSessionManager:(id)a0;

@end
