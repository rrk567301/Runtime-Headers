@class CAMediaTimingFunction;

@interface NSAnimationContext : NSObject

@property (class, readonly) NSAnimationContext *currentContext;

@property BOOL allowsAsynchronousAnimation;
@property double duration;
@property (retain) CAMediaTimingFunction *timingFunction;
@property (copy) id /* block */ completionHandler;
@property BOOL allowsImplicitAnimation;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)activate;
+ (void)flush;
+ (void)_runWithPreCommitCompletionHandlerAnimationGroup:(id /* block */)a0 completionHandler:(id /* block */)a1;
+ (void)beginGrouping;
+ (void)endGrouping;
+ (void)runAnimationGroup:(id /* block */)a0;
+ (void)runAnimationGroup:(id /* block */)a0 completionHandler:(id /* block */)a1;
+ (BOOL)_hasActiveGrouping;
+ (id)completionHandlerSuspension;
+ (void)addCommitHandler:(id /* block */)a0;

- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (unsigned long long)retainCount;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;
- (id)init;
- (BOOL)isActive;
- (void)beginPerformanceMeasurementForIdentifier:(id)a0;
- (void)endPerformanceMeasurementForIdentifier:(id)a0;
- (BOOL)isImplicit;
- (BOOL)isExplicit;

@end
