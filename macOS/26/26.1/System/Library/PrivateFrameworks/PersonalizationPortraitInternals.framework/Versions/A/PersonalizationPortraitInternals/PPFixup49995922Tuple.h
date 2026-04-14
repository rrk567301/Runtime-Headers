@class NSUUID, NSObject;

@interface PPFixup49995922Tuple : NSObject <NSCopying>

@property (readonly, nonatomic) long long rowid;
@property (readonly, nonatomic) NSObject *record;
@property (readonly, nonatomic) NSUUID *dkUUID;

+ (id)tupleWithRowid:(long long)a0 record:(id)a1 dkUUID:(id)a2;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isEqualToTuple:(id)a0;
- (id)initWithRowid:(long long)a0 record:(id)a1 dkUUID:(id)a2;

@end
