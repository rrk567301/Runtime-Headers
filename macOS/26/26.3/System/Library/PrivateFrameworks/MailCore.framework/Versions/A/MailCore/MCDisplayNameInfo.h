@class NSString;

@interface MCDisplayNameInfo : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSString *fullName;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithShortName:(id)a0 fullName:(id)a1;

@end
