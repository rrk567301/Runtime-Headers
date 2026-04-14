@class NSDictionary;

@interface IDSServerBagLoadedContents : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
