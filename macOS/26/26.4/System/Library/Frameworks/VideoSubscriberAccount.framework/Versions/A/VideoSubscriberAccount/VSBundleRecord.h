@class NSOperationQueue, LSBundleRecord;

@interface VSBundleRecord : NSObject

@property (retain, nonatomic) LSBundleRecord *record;
@property (retain, nonatomic) NSOperationQueue *lsQueue;

- (id)bundleVersion;
- (id)initWithBundleID:(id)a0;
- (void).cxx_destruct;

@end
