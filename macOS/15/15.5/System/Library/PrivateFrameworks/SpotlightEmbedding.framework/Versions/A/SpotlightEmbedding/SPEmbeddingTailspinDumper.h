@class NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface SPEmbeddingTailspinDumper : NSObject {
    NSObject<OS_dispatch_queue> *_dumpQueue;
}

@property (retain, nonatomic) NSDate *latestDumpDate;

+ (id)sharedInstance;
+ (id)log;
+ (id)lockFilePath;
+ (id)tailspinDirectory;
+ (id)tailspinPrefix;

- (id)init;
- (void).cxx_destruct;
- (void)dump;
- (void)cleanupOldDumps;
- (BOOL)canDump;
- (BOOL)dumpTailspinSync:(int)a0;

@end
