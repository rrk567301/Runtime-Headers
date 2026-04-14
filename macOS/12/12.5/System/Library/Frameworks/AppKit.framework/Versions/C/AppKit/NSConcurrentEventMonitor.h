@class NSString;

@interface NSConcurrentEventMonitor : NSObject

@property BOOL isValid;
@property BOOL isProcessing;
@property unsigned long long eventMask;
@property (copy) NSString *identifier;
@property (copy) id /* block */ callback;

- (void)dealloc;

@end
