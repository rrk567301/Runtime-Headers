@interface CADObjectID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int entityType;
@property (readonly, nonatomic) int entityID;
@property (readonly, nonatomic) int databaseID;
@property (readonly, nonatomic, getter=isTemporary) char temporary;
@property (readonly, nonatomic) char isVirtual;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringRepresentation;
- (id)dictionaryRepresentation;
- (id)entityName;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)URIRepresentation;
- (id)initWithEntityType:(int)a0 entityID:(int)a1;
- (id)initWithEntityType:(int)a0 entityID:(int)a1 databaseID:(int)a2;

@end
