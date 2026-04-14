@class NSString, _PFWeakReference;

@interface _NSQueryGenerationToken : NSQueryGenerationToken {
    NSString *_storeIdentifier;
    _PFWeakReference *_store;
    id _generationIdentifier;
    struct _queryGenerationFlags { unsigned char _isCompound : 1; unsigned char _isSingleton : 1; unsigned char _freeValueOnDealloc : 1; unsigned char _isUnmoored : 1; unsigned short _reservedFlags : 12; } _flags;
}

+ (BOOL)supportsSecureCoding;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)persistentStoreCoordinator;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (id)description;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
