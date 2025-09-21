@class NSObject;
@protocol FigCaptureInterruptionDelegate;

@interface FigCaptureInterruptionStatus : NSObject {
    id<FigCaptureInterruptionDelegate> _delegate;
}

@property (readonly, nonatomic) int reason;
@property (readonly, nonatomic) BOOL resolved;
@property (readonly, nonatomic) BOOL systemWide;
@property (weak, nonatomic) id<FigCaptureInterruptionDelegate> delegate;
@property (readonly, nonatomic) NSObject *context;

+ (void)initialize;

- (void)resolve;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithReason:(int)a0 systemWide:(BOOL)a1 delegate:(id)a2 context:(id)a3;

@end
