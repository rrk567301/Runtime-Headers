@class NSMutableDictionary;

@interface INCLocalExtensionRegistry : NSObject {
    NSMutableDictionary *_localExtensionsByIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedInstance;

- (void)registerLocalExtension:(id)a0;
- (void)deregisterLocalExtension:(id)a0;
- (id)localExtensions;
- (id)init;
- (id)localExtensionForIdentifier:(id)a0;
- (void).cxx_destruct;

@end
