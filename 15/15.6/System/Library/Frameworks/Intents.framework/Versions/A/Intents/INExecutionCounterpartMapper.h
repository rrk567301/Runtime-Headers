@class NSMutableDictionary;

@interface INExecutionCounterpartMapper : NSObject

@property (readonly, copy, nonatomic) NSMutableDictionary *_mapping;
@property (readonly, nonatomic) char _filled;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)installedApplicationsDidChange:(id)a0;
- (id)counterpartBundleIdentifiersForBundleIdentifier:(id)a0;
- (id)counterpartIdentifiersForLocalIdentifier:(id)a0;
- (id)localIdentifiersForCounterpartIdentifier:(id)a0;

@end
