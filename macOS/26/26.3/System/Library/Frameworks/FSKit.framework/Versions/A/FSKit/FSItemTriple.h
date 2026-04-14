@class NSObject;

@interface FSItemTriple : NSObject <NSCopying>

@property (readonly, retain) NSObject *first;
@property (readonly, retain) NSObject *second;
@property (readonly, retain) NSObject *third;

+ (id)tripleWith:(id)a0 second:(id)a1 third:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWith:(id)a0 second:(id)a1 third:(id)a2;

@end
