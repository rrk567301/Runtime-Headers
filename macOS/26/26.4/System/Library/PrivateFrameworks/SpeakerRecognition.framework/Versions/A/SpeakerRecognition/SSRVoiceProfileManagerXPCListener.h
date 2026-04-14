@class NSXPCListener, NSString;

@interface SSRVoiceProfileManagerXPCListener : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
