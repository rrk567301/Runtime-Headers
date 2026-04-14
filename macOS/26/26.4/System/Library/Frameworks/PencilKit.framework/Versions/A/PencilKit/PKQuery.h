@class PKRecognitionSessionManager;

@interface PKQuery : NSObject

@property (weak, nonatomic) PKRecognitionSessionManager *sessionManager;
@property (weak, nonatomic) id delegate;

- (void)teardown;
- (void)pause;
- (void).cxx_destruct;
- (void)start;
- (id)initWithRecognitionSessionManager:(id)a0;
- (void)setMathPreferredUpdatesInterval:(double)a0;

@end
