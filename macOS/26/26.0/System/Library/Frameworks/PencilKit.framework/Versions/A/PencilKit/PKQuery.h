@class PKRecognitionSessionManager;

@interface PKQuery : NSObject

@property (weak, nonatomic) PKRecognitionSessionManager *sessionManager;
@property (weak, nonatomic) id delegate;

- (void)pause;
- (void)start;
- (void)teardown;
- (void).cxx_destruct;
- (id)initWithRecognitionSessionManager:(id)a0;
- (void)setMathPreferredUpdatesInterval:(double)a0;

@end
