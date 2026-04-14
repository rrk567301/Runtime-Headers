@class NSOperationQueue, LSBundleRecord;

@interface VSBundleRecord : NSObject

@property (retain, nonatomic) LSBundleRecord *record;
@property (retain, nonatomic) NSOperationQueue *lsQueue;

- (id)bundleVersion;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0;

@end
