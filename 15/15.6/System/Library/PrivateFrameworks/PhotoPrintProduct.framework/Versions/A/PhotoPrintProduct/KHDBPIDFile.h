@class NSString;

@interface KHDBPIDFile : NSObject {
    NSString *_path;
    char _locked;
    NSString *_lockedBy;
    int _lockedByPid;
}

- (void)dealloc;
- (id)initWithPath:(id)a0;
- (int)acquireLock;
- (id)lockedBy;
- (int)lockedByPid;
- (void)removeLock;

@end
