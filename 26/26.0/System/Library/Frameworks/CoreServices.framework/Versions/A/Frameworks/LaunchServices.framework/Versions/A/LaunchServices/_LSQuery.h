@interface _LSQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isLegacy) BOOL legacy;

- (id)_init;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)resolveExpensiveQueryRemotelyUsingResolver:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (BOOL)_remoteResolutionIsExpensive;
- (BOOL)_canResolveLocallyWithoutMappingDatabase;

@end
