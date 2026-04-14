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

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)endSession;
- (void)dealloc;
- (void)setState:(unsigned long long)a0;
- (BOOL)startSession;

@end
