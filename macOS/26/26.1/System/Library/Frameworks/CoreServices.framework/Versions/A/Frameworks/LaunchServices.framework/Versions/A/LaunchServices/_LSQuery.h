@interface _LSQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isLegacy) BOOL legacy;

- (unsigned long long)hash;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (id)resolveExpensiveQueryRemotelyUsingResolver:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (BOOL)_remoteResolutionIsExpensive;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)_canResolveLocallyWithoutMappingDatabase;

@end
