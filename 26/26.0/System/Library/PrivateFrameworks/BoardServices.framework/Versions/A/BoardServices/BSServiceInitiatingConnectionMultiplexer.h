@class NSString, NSMutableDictionary;

@interface BSServiceInitiatingConnectionMultiplexer : NSObject <BSDebugDescriptionProviding> {
    NSMutableDictionary *_lock_endpointToOutgoingRootConnections;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_invalidated;
    BOOL _userInteractive;
}

@property (class, readonly, nonatomic) BSServiceInitiatingConnectionMultiplexer *userInteractiveMultiplexer;
@property (class, readonly, nonatomic) BSServiceInitiatingConnectionMultiplexer *defaultMultiplexer;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)debugDescription;

- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;

@end
