@class NSArray, NSMutableDictionary, PMXPCSupport, NSString;
@protocol PKBrowserDelegate;

@interface PKBrowser : NSObject <PMXPCSupportDelegate>

@property (retain, nonatomic) NSMutableDictionary *devices;
@property (nonatomic) BOOL browsing;
@property (retain) PMXPCSupport *xpc;
@property id<PKBrowserDelegate> delegate;
@property unsigned long long browsingMask;
@property (readonly) NSArray *deviceList;
@property (readonly) NSArray *filteredDeviceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)start;
- (void)stop;
- (id)initWithDelegate:(id)a0;
- (void)printerAdded:(id)a0 more:(BOOL)a1;
- (void)printerRemoved:(id)a0 more:(BOOL)a1;
- (void)handleEventForCommand:(int)a0 status:(int)a1 event:(id)a2;
- (id)queueList;
- (void)printerUpdated:(id)a0 more:(BOOL)a1;
- (unsigned long long)browsingMask;
- (void)setBrowsingMask:(unsigned long long)a0;

@end
