@class NSUUID, SATask, NSMutableString;

@interface SADyldInfo : NSObject {
    char _isSharedCache;
    char _dyldInfoIsComplete;
    char _pathIsComplete;
    SATask *_task;
    NSUUID *_uuid;
    unsigned long long _loadAddress;
    unsigned long long _stringID;
    NSMutableString *_path;
}

- (id)debugDescription;
- (void).cxx_destruct;

@end
