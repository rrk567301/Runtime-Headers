@class PKRecognitionSessionManager;

@interface PKQuery : NSObject

@property (weak, nonatomic) PKRecognitionSessionManager *sessionManager;
@property (weak, nonatomic) id delegate;

- (void)start;
- (void)pause;
- (void)teardown;
- (void).cxx_destruct;
- (id)initWithRecognitionSessionManager:(id)a0;
- (void)setMathPreferredUpdatesInterval:(double)a0;

@end
