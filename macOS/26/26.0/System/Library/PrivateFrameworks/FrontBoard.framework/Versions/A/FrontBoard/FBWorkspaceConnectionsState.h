@class NSSet, NSMutableIndexSet;

@interface FBWorkspaceConnectionsState : NSObject <NSCopying, NSMutableCopying> {
    NSMutableIndexSet *_pidSet;
}

@property (class, readonly, nonatomic) unsigned long long minimumSerializedDataLength;

@property (readonly, nonatomic) unsigned long long serializedDataLength;
@property (readonly, copy, nonatomic) NSSet *processIdentifiers;

+ (id)deserializeLength:(out unsigned long long *)a0 fromReader:(id /* block */)a1;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)init;
- (id)_initWithIndexSet:(id)a0;
- (id)description;
- (long long)serializeToWriter:(id /* block */)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
