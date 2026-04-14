@class NSArray;

@interface PXTuple : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) NSArray *objects;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (id)initWithObjects:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
