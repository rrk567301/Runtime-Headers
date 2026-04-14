@interface CADObjectID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int entityType;
@property (readonly, nonatomic) int entityID;
@property (readonly, nonatomic) int databaseID;
@property (readonly, nonatomic, getter=isTemporary) BOOL temporary;
@property (readonly, nonatomic) BOOL isVirtual;

- (id)stringRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)entityName;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)URIRepresentation;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithEntityType:(int)a0 entityID:(int)a1;
- (id)initWithEntityType:(int)a0 entityID:(int)a1 databaseID:(int)a2;

@end
