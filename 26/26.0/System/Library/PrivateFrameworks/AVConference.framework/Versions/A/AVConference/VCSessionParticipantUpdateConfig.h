@class NSArray, NSMutableDictionary, NSString, NSMutableArray;

@interface VCSessionParticipantUpdateConfig : NSObject <NSSecureCoding> {
    NSMutableDictionary *_properties;
    NSMutableDictionary *_propertiesCache;
    NSString *_description;
    NSMutableArray *_cachedMediaStateTransitions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL useCache;
@property (readonly, nonatomic) NSArray *cachedStateTransitions;
@property (readonly, nonatomic) BOOL hasCachedChanges;

+ (id)unserializeCache:(id)a0;

- (void)dealloc;
- (id)propertyWithName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)addCachedTransitionForMediaType:(unsigned int)a0 toState:(unsigned int)a1 previousState:(unsigned int *)a2 error:(id *)a3;
- (void)cleanupTransitionLoopsForMediaType:(unsigned int)a0 mediaState:(unsigned int)a1;
- (void)deserializeUInt32Property:(id)a0 withCoder:(id)a1;
- (void)enumerateCachedTransitionsWithBlock:(id /* block */)a0;
- (id)serializeCacheWithError:(id *)a0;
- (void)serializeCoderProperty:(id)a0 withCoder:(id)a1;
- (void)serializeUint32Property:(id)a0 withCoder:(id)a1;
- (void)setPositionalInfoParamWithBlock:(id /* block */)a0 forceCache:(BOOL)a1;
- (void)setValue:(id)a0 forPropertyName:(id)a1 forceCache:(BOOL)a2;
- (void)updateDescription;

@end
