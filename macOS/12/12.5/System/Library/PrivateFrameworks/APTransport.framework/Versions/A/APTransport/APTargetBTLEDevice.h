@class NSString;

@interface APTargetBTLEDevice : NSObject

@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) BOOL isSoloCapable;
@property (nonatomic) BOOL supportsMediaControlPort;
@property (nonatomic) struct { unsigned char flags; unsigned char config; unsigned char ipv4[4]; } lastData;
@property (nonatomic) int lastRSSI;

- (void)dealloc;

@end
