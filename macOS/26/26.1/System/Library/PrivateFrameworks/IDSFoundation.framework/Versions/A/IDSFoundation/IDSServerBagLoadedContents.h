@class NSDictionary;

@interface IDSServerBagLoadedContents : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;

@end
