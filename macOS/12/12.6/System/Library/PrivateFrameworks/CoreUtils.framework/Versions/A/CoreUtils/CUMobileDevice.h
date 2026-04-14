@class NSUUID, NSString;

@interface CUMobileDevice : NSObject <NSCopying>

@property (nonatomic) struct _AMDevice { } *mdDevice;
@property (nonatomic) struct _AMDServiceConnection { } *mdNotificationService;
@property (nonatomic) struct _AMDevice { } *mdPlaceholderDevice;
@property (nonatomic) BOOL mdStartedListener;
@property (nonatomic) BOOL mdStartedService;
@property (nonatomic) BOOL connected;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *internalModel;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL paired;
@property (nonatomic) BOOL placeholder;
@property (copy, nonatomic) NSString *udid;
@property (copy, nonatomic) NSString *wifiAddress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (unsigned int)updateWithAMDevice:(struct _AMDevice { } *)a0 connect:(BOOL)a1 paired:(int)a2;
- (BOOL)removeAMDevice:(struct _AMDevice { } *)a0 changes:(unsigned int *)a1;

@end
