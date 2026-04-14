@class NSDictionary, NSMutableDictionary, NSString;

@interface BSMachServiceAliases : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_lock_aliases;
    NSString *_lock_encoded;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _mutable;
}

@property (readonly, copy, nonatomic) NSDictionary *environmentRepresentation;

+ (id)environmentAliases;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copy;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)resolveMachService:(id)a0;

@end
