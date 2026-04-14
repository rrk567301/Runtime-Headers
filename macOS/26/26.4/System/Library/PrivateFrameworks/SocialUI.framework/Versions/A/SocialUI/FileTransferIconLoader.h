@class NSOperationQueue;

@interface FileTransferIconLoader : NSObject {
    NSOperationQueue *_queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancelNotificationsForDelegate:(id)a0;
- (void)queueURL:(id)a0 forSize:(double)a1 withDelegate:(id)a2;

@end
