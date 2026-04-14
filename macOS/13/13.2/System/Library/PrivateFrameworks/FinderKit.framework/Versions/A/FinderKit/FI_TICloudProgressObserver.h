@class NSString, NSArray, FI_TInternalCloudProgressObserver, NSURL, NSObject;

@interface FI_TICloudProgressObserver : NSObject {
    NSURL *_rootURL;
    NSObject *_subscriber;
    int _iCloudFlavor;
}

@property (retain) FI_TInternalCloudProgressObserver *internalObserver;
@property (readonly, nonatomic) struct TFENode { struct OpaqueNodeRef *fNodeRef; } sidebarTargetNode;
@property (copy, nonatomic) NSString *iCloudDriveStatus;
@property (nonatomic) double percentageComplete;
@property (readonly) NSArray *progresses;
@property (readonly, nonatomic) BOOL syncedWithICloud;

+ (id)keyPathsForValuesAffectingSyncedWithICloud;
+ (id)iCloudProgressObserverForFlavor:(int)a0;
+ (id)iCloudDriveObserver;
+ (id)iCloudDriveDataSeparatedObserver;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)startObserving;
- (void)stopObserving;
- (id)_init:(int)a0;

@end
