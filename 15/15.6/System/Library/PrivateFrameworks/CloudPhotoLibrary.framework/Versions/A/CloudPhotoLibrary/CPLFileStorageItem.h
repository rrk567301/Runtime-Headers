@class CPLResourceIdentity, NSDate;

@interface CPLFileStorageItem : NSObject <NSCopying>

@property (readonly, nonatomic) CPLResourceIdentity *identity;
@property (readonly, nonatomic, getter=isOriginal) char original;
@property (readonly, nonatomic, getter=isMarkedForDelete) char markedForDelete;
@property (readonly, nonatomic) NSDate *lastAccessDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)getResourceValue:(out id *)a0 forKey:(id)a1 error:(out id *)a2;
- (id)initWithIdentity:(id)a0 original:(char)a1 markedForDelete:(char)a2 lastAccessDate:(id)a3;

@end
