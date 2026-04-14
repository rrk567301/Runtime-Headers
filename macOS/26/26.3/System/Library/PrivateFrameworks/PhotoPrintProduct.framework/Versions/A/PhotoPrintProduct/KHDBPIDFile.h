@class NSString;

@interface KHDBPIDFile : NSObject {
    NSString *_path;
    BOOL _locked;
    NSString *_lockedBy;
    int _lockedByPid;
}

- (id)initWithPath:(id)a0;
- (void)dealloc;
- (int)acquireLock;
- (id)lockedBy;
- (int)lockedByPid;
- (void)removeLock;

@end
