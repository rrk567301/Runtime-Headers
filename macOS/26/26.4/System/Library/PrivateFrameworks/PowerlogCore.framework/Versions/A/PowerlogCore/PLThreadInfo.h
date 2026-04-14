@class NSString;

@interface PLThreadInfo : NSObject

@property double systemTime;
@property double userTime;
@property unsigned long long threadID;
@property (retain) NSString *threadName;
@property BOOL isNamed;

- (void).cxx_destruct;
- (id)description;
- (id)diffSinceBaseline:(id)a0;
- (id)initWithThread:(unsigned long long)a0 inProcess:(int)a1;
- (BOOL)isEqualToThreadInfo:(id)a0;

@end
