@class NSMutableArray, NSArray;

@interface MIDIUMPEndpointManager : NSObject {
    NSMutableArray *_endpoints;
    struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } mMutex;
}

@property (class, readonly, nonatomic) MIDIUMPEndpointManager *sharedInstance;

@property (retain, nonatomic) NSMutableArray *functionBlocks;
@property (readonly, copy, nonatomic) NSArray *UMPEndpoints;

+ (id)description;

- (void)addEndpoint:(id)a0;
- (BOOL)removeEndpoint:(unsigned int)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addFunctionBlock:(id)a0;
- (id)findEndpoint:(unsigned int)a0;
- (id)findFunctionBlock:(unsigned int)a0;
- (BOOL)postNotificationName:(id)a0 endpoint:(id)a1 functionBlock:(id)a2;
- (BOOL)removeFunctionBlock:(unsigned int)a0;
- (void)updateEndpoint:(unsigned int)a0 description:(id)a1;
- (void)updateFunctionBlock:(unsigned int)a0 description:(id)a1;

@end
