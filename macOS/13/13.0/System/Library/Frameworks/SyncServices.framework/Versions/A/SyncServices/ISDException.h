@interface ISDException : NSException {
    int mLogStackTraceMode;
    BOOL mLogReasonOnly;
}

+ (void)initialize;
+ (id)exceptionWithName:(id)a0 reason:(id)a1 userInfo:(id)a2;
+ (void)raise:(id)a0 format:(id)a1;
+ (id)exceptionWithName:(id)a0 reason:(id)a1 userInfo:(id)a2 logStackTraceMode:(int)a3;
+ (id)exceptionWithName:(id)a0 reason:(id)a1 userInfo:(id)a2 logStackTraceMode:(int)a3 logReasonOnly:(BOOL)a4;
+ (void)setLogStackTraceOnException:(BOOL)a0;
+ (BOOL)logStackTraceOnException;
+ (void)_logStackTraceWithExceptionName:(id)a0 reason:(id)a1;
+ (void)_logStackTraceWithExceptionReason:(id)a0;

- (void)raise;
- (id)initWithName:(id)a0 reason:(id)a1 userInfo:(id)a2;
- (void)setLogStackTraceOnException:(int)a0;
- (int)logStackTraceOnException;
- (id)initWithName:(id)a0 reason:(id)a1 userInfo:(id)a2 logStackTraceMode:(int)a3;
- (id)initWithName:(id)a0 reason:(id)a1 userInfo:(id)a2 logStackTraceMode:(int)a3 logReasonOnly:(BOOL)a4;

@end
