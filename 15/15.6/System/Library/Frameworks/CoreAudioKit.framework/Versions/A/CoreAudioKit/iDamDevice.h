@class NSString, NSImage, NSBundle, NSColor;

@interface iDamDevice : NSObject {
    NSImage *cautionImage;
    NSImage *stopImage;
    NSBundle *currentBundle;
}

@property struct _AMDevice { } *device;
@property (readonly) struct _AMDServiceConnection { } *serviceConnection;
@property (readonly) NSString *udid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *deviceColor;
@property (readonly, nonatomic) NSString *enclosureColor;
@property (nonatomic) unsigned int state;
@property (readonly, nonatomic) NSImage *icon;
@property (readonly, getter=isEnabled) char enabled;
@property (readonly) NSColor *labelColor;
@property (readonly) NSString *actionButtonTitle;
@property (readonly, getter=isActionButtonEnabled) char actionButtonEnabled;
@property (readonly, getter=isWorking) char working;
@property (readonly) NSString *errorToolTip;
@property (readonly) NSString *buttonToolTip;
@property (readonly) NSImage *errorImage;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)udidForAMDRef:(struct _AMDevice { } *)a0;

- (void)dealloc;
- (char)isEqual:(id)a0;
- (void)performAction:(id)a0;
- (void)logError:(int)a0;
- (char)validateDevice;
- (id)initWithDeviceRef:(struct _AMDevice { } *)a0;
- (void)receiveResponse;
- (void)checkDeviceConfiguration;
- (void)connectDevice;
- (void)disconnectDevice;

@end
