@class NSEntityDescription, NSPropertyDescription;

@interface _NSPropertyDescriptionProxy : NSObject <NSCoding, NSSecureCoding> {
    id _sourceBuffer;
    NSPropertyDescription *_underlyingProperty;
    NSEntityDescription *_entityDescription;
    unsigned int _entitysReferenceIDForProperty;
}

@property (class, readonly) char supportsSecureCoding;

+ (char)resolveInstanceMethod:(SEL)a0;

- (Class)class;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)isKindOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)entity;
- (void)_createCachesAndOptimizeState;
- (unsigned int)_entitysReferenceID;
- (void)_setEntity:(id)a0;
- (void)_setEntityAndMaintainIndices:(id)a0;
- (void)_setEntitysReferenceID:(unsigned int)a0;
- (id)_underlyingProperty;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1;
- (id)initWithPropertyDescription:(id)a0;

@end
