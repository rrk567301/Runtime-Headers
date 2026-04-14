@class NSNumber;

@interface ISPrefsCache : NSObject {
    NSNumber *_focusRingTint;
    NSNumber *_shouldDrawObviousPlaceholders;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) int focusRingTint;
@property (readonly) BOOL shouldDrawObviousPlaceholders;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_objectForKey:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_handleDefaultChangeNotification:(id)a0;
- (int)focusRingTint;

@end
