@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface CKDFileWatcher : NSObject

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source;
@property (nonatomic) int fd;

+ (id)queue;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;

@end
