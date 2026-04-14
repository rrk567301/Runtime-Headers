@class NSString;

@interface MCDisplayNameInfo : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSString *fullName;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithShortName:(id)a0 fullName:(id)a1;

@end
