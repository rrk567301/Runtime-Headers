@class QCArray, QCBooleanPort;

@interface QCRecursor : QCPatch {
    QCBooleanPort *inputInitialize;
    char _updating;
    char _initialized;
    QCArray *_values;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (id)stateArrays;
+ (int)timeModeWithIdentifier:(id)a0;

- (void)dealloc;
- (void)finalize;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (char)setup:(id)a0;
- (void)_initNotifications;
- (void)_listenToNotification:(id)a0;
- (void)_stateUpdated;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)finalize_QCRecursor;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;

@end
