@class TMLoggingFormatter;

@interface TMLoggingHandler : NSObject

@property (retain) TMLoggingFormatter *formatter;
@property unsigned int filterLevel;

+ (id)handler;

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldHandleRecord:(id)a0;
- (void)handleRecord:(id)a0;
- (void)handleMessage:(id)a0 forRecord:(id)a1;

@end
