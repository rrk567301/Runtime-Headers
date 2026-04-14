@class NSLock, NSMutableDictionary;

@interface ValidationProgress : NSObject {
    NSMutableDictionary *_progressSizes;
    NSMutableDictionary *_progressPercents;
    NSLock *_lock;
}

@property (readonly, nonatomic) long long current;
@property (readonly, nonatomic) long long total;

- (void).cxx_destruct;
- (id)init;
- (void)updateProgressForURL:(id)a0 withContext:(id)a1;

@end
