@class NSEvent, NSResponder;
@protocol _NSQuickActionItemSource, _NSQuickActionAutovalidationHandler;

@interface _NSQuickActionAutovalidationScheduler : NSObject {
    id<_NSQuickActionAutovalidationHandler> _handler;
    NSResponder<_NSQuickActionItemSource> *_responder;
    NSEvent *_lastEventProcessedForValidation;
    id /* block */ _hysteresisBlock;
    BOOL _invalidationIsDeferrable;
    BOOL _isObserving;
    BOOL _isActive;
}

@property (weak) id<_NSQuickActionItemSource> itemSource;

+ (id)schedulerWithHandler:(id)a0;

- (void)start;
- (void)dealloc;
- (void)cancel;
- (id)initWithHandler:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)windowDidUpdate:(id)a0;

@end
