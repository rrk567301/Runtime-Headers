@class FSFileHandle;

@interface FSItem : NSObject

@property (retain) FSFileHandle *fileHandle;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)init;

@end
