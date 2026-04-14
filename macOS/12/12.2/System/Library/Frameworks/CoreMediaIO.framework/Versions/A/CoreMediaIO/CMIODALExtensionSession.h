@class NSDictionary, CMIOExtensionSession, NSString;

@interface CMIODALExtensionSession : NSObject <CMIOExtensionSessionDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_extensions;
    NSString *_description;
}

@property (retain) NSDictionary *extensions;
@property (readonly, retain) CMIOExtensionSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)updateStateWithExtensionsArrived:(id)a0 extensionsRemoved:(id)a1;
- (void)session:(id)a0 availableExtensionsChanged:(id)a1;

@end
