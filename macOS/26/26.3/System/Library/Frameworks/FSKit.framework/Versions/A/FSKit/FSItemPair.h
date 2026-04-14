@class NSObject;

@interface FSItemPair : NSObject <NSCopying>

@property (readonly) NSObject *first;
@property (readonly) NSObject *second;

+ (id)pairWith:(id)a0 andObject:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWith:(id)a0 andObject:(id)a1;

@end
