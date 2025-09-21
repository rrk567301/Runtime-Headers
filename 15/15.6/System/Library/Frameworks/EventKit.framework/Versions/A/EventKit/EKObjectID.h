@class NSString, NSDictionary, NSURL, CADObjectID;

@interface EKObjectID : NSObject <NSCopying, NSSecureCoding> {
    char _temporary;
    int _entityType;
    int _rowID;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *entityName;
@property (readonly, nonatomic) long long entityType;
@property (readonly, nonatomic) int rowID;
@property (readonly, nonatomic) int databaseID;
@property (readonly, nonatomic) char isTemporary;
@property (readonly, nonatomic) char isVirtual;
@property (readonly, nonatomic) NSString *stringRepresentation;
@property (readonly, nonatomic) NSURL *URIRepresentation;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) CADObjectID *CADObjectID;

+ (id)EKObjectIDsFromData:(id)a0;
+ (id)EKObjectIDsFromData:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 databaseID:(int)a2;
+ (id)EKObjectIDsFromData:(id)a0 databaseID:(int)a1;
+ (id)CADObjectIDsFromEKObjectIDs:(id)a0 withGeneration:(int)a1;
+ (id)EKObjectIDsFromCADObjectIDs:(id)a0;
+ (id)objectIDWithCADObjectID:(id)a0;
+ (id)objectIDWithEntityType:(int)a0 rowID:(int)a1;
+ (id)objectIDWithEntityType:(int)a0 rowID:(int)a1 databaseID:(int)a2;
+ (id)objectIDWithURL:(id)a0;
+ (id)temporaryObjectIDWithEntityType:(int)a0;
+ (id)virtualObjectIDWithEntityType:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)CADObjectIDWithGeneration:(int)a0;
- (id)initWithEntityType:(int)a0 rowID:(int)a1 databaseID:(int)a2 temporary:(char)a3;

@end
