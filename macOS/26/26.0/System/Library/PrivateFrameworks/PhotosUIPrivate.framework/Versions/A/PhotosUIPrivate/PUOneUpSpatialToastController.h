@class NSString;

@interface PUOneUpSpatialToastController : NSObject {
    void /* unknown type, empty encoding */ toastProgress;
    void /* unknown type, empty encoding */ downloadProgressToast;
    void /* unknown type, empty encoding */ downloadTask;
}

@property (class, nonatomic, readonly) NSString *statusManagerItemIdentifier;
@property (class, nonatomic, readonly) NSString *downloadErrorDomain;

- (id)init;
- (void).cxx_destruct;
- (void)createAndStartToast;
- (void)threeDToggleDidChange;

@end
