@class NSEntityDescription, NSPropertyDescription;

@interface _NSPropertyDescriptionProxy : NSObject <NSCoding, NSSecureCoding> {
    id _sourceBuffer;
    NSPropertyDescription *_underlyingProperty;
    NSEntityDescription *_entityDescription;
    unsigned int _entitysReferenceIDForProperty;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)resolveInstanceMethod:(SEL)a0;

- (void)_setEntity:(id)a0;
- (id)entity;
- (id)_underlyingProperty;
- (BOOL)isKindOfClass:(Class)a0;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)_setEntitysReferenceID:(unsigned int)a0;
- (void)_createCachesAndOptimizeState;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)_setEntityAndMaintainIndices:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned int)_entitysReferenceID;
- (Class)class;
- (id)initWithPropertyDescription:(id)a0;

@end
