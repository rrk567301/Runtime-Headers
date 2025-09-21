@class NSString;
@protocol PKSessionDelegate;

@interface PKDASession : NSObject <PKSession> {
    _Atomic unsigned int _sessionState;
}

@property (readonly, nonatomic) unsigned long long state;
@property (weak, nonatomic) id<PKSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setState:(unsigned long long)a0;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)endSession;
- (void).cxx_destruct;
- (BOOL)startSession;

@end
