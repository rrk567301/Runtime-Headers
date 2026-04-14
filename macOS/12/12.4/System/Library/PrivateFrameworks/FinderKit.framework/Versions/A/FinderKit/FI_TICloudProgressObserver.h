@class NSString, NSArray, NSURL, FI_TInternalCloudProgressObserver, NSObject;

@interface FI_TICloudProgressObserver : NSObject {
    NSURL *_rootURL;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _sidebarTargetNode;
    NSObject *_subscriber;
    FI_TInternalCloudProgressObserver *_internalObserver;
}

@property (copy, nonatomic) NSString *iCloudDriveStatus;
@property (nonatomic) double percentageComplete;
@property (readonly) NSArray *progresses;

+ (id)iCloudDriveObserver;
+ (id)iCloudDriveDataSeparatedObserver;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)startObserving;
- (void)stopObserving;
- (id)_init:(BOOL)a0;
- (id)progresses;
- (struct TFENode { struct OpaqueNodeRef *x0; })sidebarTargetNode;

@end
