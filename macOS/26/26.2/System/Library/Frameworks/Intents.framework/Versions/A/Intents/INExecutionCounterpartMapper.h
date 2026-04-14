@class NSMutableDictionary;

@interface INExecutionCounterpartMapper : NSObject

@property (readonly, copy, nonatomic) NSMutableDictionary *_mapping;
@property (readonly, nonatomic) BOOL _filled;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;

+ (void)initialize;

- (id)counterpartIdentifiersForLocalIdentifier:(id)a0;
- (id)counterpartBundleIdentifiersForBundleIdentifier:(id)a0;
- (void)reset;
- (void).cxx_destruct;
- (id)localIdentifiersForCounterpartIdentifier:(id)a0;
- (void)installedApplicationsDidChange:(id)a0;
- (id)init;
- (void)dealloc;

@end
