@class NSSet, NSMutableIndexSet;

@interface FBWorkspaceConnectionsState : NSObject <NSCopying, NSMutableCopying> {
    NSMutableIndexSet *_pidSet;
}

@property (class, readonly, nonatomic) unsigned long long minimumSerializedDataLength;

@property (readonly, nonatomic) unsigned long long serializedDataLength;
@property (readonly, copy, nonatomic) NSSet *processIdentifiers;

+ (id)deserializeLength:(out unsigned long long *)a0 fromReader:(id /* block */)a1;

- (id)copy;
- (id)mutableCopy;
- (id)description;
- (id)_initWithIndexSet:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)serializeToWriter:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
