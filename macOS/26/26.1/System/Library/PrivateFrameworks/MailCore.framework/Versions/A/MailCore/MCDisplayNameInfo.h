@class NSString;

@interface MCDisplayNameInfo : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSString *fullName;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithShortName:(id)a0 fullName:(id)a1;

@end
