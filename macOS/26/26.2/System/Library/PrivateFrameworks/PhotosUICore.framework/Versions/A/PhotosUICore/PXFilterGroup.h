@class NSString, NSArray;

@interface PXFilterGroup : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *filterIdentifiers;

+ (id)groupWithName:(id)a0 filterIdentifiers:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)a0 filterIdentifiers:(id)a1;

@end
