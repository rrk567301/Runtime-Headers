@class NSThread;

@interface TSKAccessControllerWriterQueueItem : NSObject

@property (readonly, nonatomic) NSThread *threadIdentifier;
@property (readonly, nonatomic) char didTakePriority;

+ (id)priorityPrimaryThreadWriterQueueItemForAccessController:(id)a0;
+ (id)writerQueueItemWithThreadIdentifier:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithThreadIdentifier:(id)a0;

@end
