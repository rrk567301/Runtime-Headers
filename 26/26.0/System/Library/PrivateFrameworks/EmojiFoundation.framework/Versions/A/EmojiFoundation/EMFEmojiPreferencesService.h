@class NSXPCListener, NSString, EMFEmojiPreferences, NSObject;
@protocol OS_dispatch_queue;

@interface EMFEmojiPreferencesService : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
}

@property (retain, nonatomic) EMFEmojiPreferences *preferences;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedServiceWithMachName:(id)a0;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (id)initWithMachName:(id)a0;
- (void).cxx_destruct;
- (void)_createPreferencesIfNecessary;
- (BOOL)allowsConnection:(id)a0;
- (id)obtainApplicationIdentifierFromConnection:(id)a0;
- (id)obtainBundleIdentifierFromConnection:(id)a0;

@end
