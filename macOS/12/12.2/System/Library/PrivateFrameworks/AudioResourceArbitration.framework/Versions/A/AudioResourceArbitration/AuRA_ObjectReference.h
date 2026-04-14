@protocol AuRA_Object;

@interface AuRA_ObjectReference : NSObject <NSCopying>

@property (retain, nonatomic) id<AuRA_Object> object;
@property (nonatomic) unsigned long long objectID;
@property (nonatomic) unsigned int classID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
