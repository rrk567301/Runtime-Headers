@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BKAssetMetadataFilenameManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reservedFilenamesAccessQueue;
@property (retain, nonatomic) NSMutableDictionary *reservedFilenames;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)reserveNonCollidingFilename:(id)a0 inDirectory:(id)a1;
- (void)unreserveFilename:(id)a0 inDirectory:(id)a1;

@end
