@class QCArray, QCBooleanPort;

@interface QCRecursor : QCPatch {
    QCBooleanPort *inputInitialize;
    BOOL _updating;
    BOOL _initialized;
    QCArray *_values;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;
+ (id)stateArrays;

- (void)finalize;
- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (BOOL)setup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)_listenToNotification:(id)a0;
- (void)finalize_QCRecursor;
- (void)_stateUpdated;
- (void)_initNotifications;

@end
