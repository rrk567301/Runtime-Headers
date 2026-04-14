@class NSData;

@interface CNProviderMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long version;
@property (retain, nonatomic) NSData *pageData;
@property (retain, nonatomic) NSData *syncAnchorData;
@property (readonly, nonatomic) NSData *dataRepresentation;

+ (id)log;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDataRepresentation:(id)a0;
- (id)initWithCoreDataProviderMetadata:(id)a0;
- (void)applyToCoreDataProviderMetadata:(id)a0;
- (id)initWithPage:(id)a0 syncAnchor:(id)a1;
- (id)initWithVersion:(long long)a0 page:(id)a1 syncAnchor:(id)a2;

@end
