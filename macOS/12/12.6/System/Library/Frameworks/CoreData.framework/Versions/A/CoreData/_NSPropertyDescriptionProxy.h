@class NSEntityDescription, NSPropertyDescription;

@interface _NSPropertyDescriptionProxy : NSObject <NSCoding, NSSecureCoding> {
    id _sourceBuffer;
    NSPropertyDescription *_underlyingProperty;
    NSEntityDescription *_entityDescription;
    unsigned int _entitysReferenceIDForProperty;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)resolveInstanceMethod:(SEL)a0;

- (BOOL)isEqual:(id)a0;
- (Class)class;
- (BOOL)isKindOfClass:(Class)a0;
- (unsigned long long)hash;
- (id)description;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)entity;
- (unsigned int)_entitysReferenceID;
- (id)_underlyingProperty;
- (void)_createCachesAndOptimizeState;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1;
- (void)_setEntity:(id)a0;
- (void)_setEntityAndMaintainIndices:(id)a0;
- (void)_setEntitysReferenceID:(unsigned int)a0;
- (id)initWithPropertyDescription:(id)a0;

@end
