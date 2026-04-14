@class NSMutableDictionary;

@interface INCLocalExtensionRegistry : NSObject {
    NSMutableDictionary *_localExtensionsByIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedInstance;

- (void)registerLocalExtension:(id)a0;
- (id)localExtensions;
- (void).cxx_destruct;
- (id)init;
- (void)deregisterLocalExtension:(id)a0;
- (id)localExtensionForIdentifier:(id)a0;

@end
