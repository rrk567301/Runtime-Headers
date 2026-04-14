@class NSString;

@interface SABlockingInfo : NSObject

@property (readonly) unsigned long long blockingTid;
@property (readonly) int blockingPid;
@property (readonly) NSString *portName;
@property (readonly) unsigned long long portFlags;
@property (readonly) unsigned long long portDomain;

- (id)_init;
- (long long)compare:(id)a0;
- (id)init;
- (id)descriptionForPid:(int)a0 tid:(unsigned long long)a1 threadPriority:(int)a2 options:(unsigned long long)a3 nameCallback:(id /* block */)a4;
- (BOOL)displaysSomethingForPid:(int)a0 tid:(unsigned long long)a1 displayOptions:(unsigned long long)a2;
- (BOOL)hasMatchingBlocker:(id)a0;

@end
