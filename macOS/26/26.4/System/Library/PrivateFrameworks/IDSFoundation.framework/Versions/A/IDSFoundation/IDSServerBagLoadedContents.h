@class NSDictionary;

@interface IDSServerBagLoadedContents : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
