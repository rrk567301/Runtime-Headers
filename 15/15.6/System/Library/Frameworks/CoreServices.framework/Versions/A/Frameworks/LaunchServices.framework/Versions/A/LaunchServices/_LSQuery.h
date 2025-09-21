@interface _LSQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isLegacy) char legacy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_canResolveLocallyWithoutMappingDatabase;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (id)_init;
- (char)_remoteResolutionIsExpensive;
- (char)_requiresDatabaseMappingEntitlement;
- (id)resolveExpensiveQueryRemotelyUsingResolver:(id)a0 error:(id *)a1;

@end
