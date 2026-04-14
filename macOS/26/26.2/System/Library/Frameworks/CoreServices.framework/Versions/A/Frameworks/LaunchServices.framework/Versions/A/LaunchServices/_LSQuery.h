@interface _LSQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isLegacy) BOOL legacy;

- (BOOL)_requiresDatabaseMappingEntitlement;
- (id)initWithCoder:(id)a0;
- (BOOL)_remoteResolutionIsExpensive;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (id)resolveExpensiveQueryRemotelyUsingResolver:(id)a0 error:(id *)a1;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (id)init;
- (BOOL)_canResolveLocallyWithoutMappingDatabase;

@end
