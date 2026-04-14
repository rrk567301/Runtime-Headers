@class NSEntityDescription, NSPropertyDescription;

@interface _NSPropertyDescriptionProxy : NSObject <NSCoding, NSSecureCoding> {
    id _sourceBuffer;
    NSPropertyDescription *_underlyingProperty;
    NSEntityDescription *_entityDescription;
    unsigned int _entitysReferenceIDForProperty;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)resolveInstanceMethod:(SEL)a0;

- (id)_underlyingProperty;
- (void)_createCachesAndOptimizeState;
- (void)_setEntitysReferenceID:(unsigned int)a0;
- (unsigned int)_entitysReferenceID;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1;
- (void)_setEntity:(id)a0;
- (unsigned long long)hash;
- (void)_setEntityAndMaintainIndices:(id)a0;
- (id)entity;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (Class)class;
- (id)initWithPropertyDescription:(id)a0;

@end
