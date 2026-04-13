@class NSMutableArray;

@interface AVInternalDeviceList : NSObject {
    id /* block */ propertyListener;
    id /* block */ hardwareListener;
    id /* block */ changeListener;
    NSMutableArray *deviceList;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } listLock;
}

@property (copy, nonatomic) id /* block */ changeListener;

+ (id)newDeviceList;
+ (id)defaultDeviceOfType:(unsigned int)a0;

- (void)dealloc;
- (id)init;
- (void)cleanup;
- (id)deviceList;
- (void)notifyDeviceListChanged;
- (unsigned int)dataSourceControlID;

@end
