@class NSOperationQueue, LSBundleRecord;

@interface VSBundleRecord : NSObject

@property (retain, nonatomic) LSBundleRecord *record;
@property (retain, nonatomic) NSOperationQueue *lsQueue;

- (id)initWithBundleID:(id)a0;
- (id)bundleVersion;
- (void).cxx_destruct;

@end
