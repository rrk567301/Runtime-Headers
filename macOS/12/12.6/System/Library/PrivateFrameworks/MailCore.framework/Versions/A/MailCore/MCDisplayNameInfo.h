@class NSString;

@interface MCDisplayNameInfo : NSObject

@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSString *fullName;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)initWithShortName:(id)a0 fullName:(id)a1;

@end
