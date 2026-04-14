@class NSDictionary, MPModelObject;

@interface MPModelObjectMediaItem : MPNondurableMediaItem {
    NSDictionary *_propertyValues;
}

@property (readonly, nonatomic) MPModelObject *modelObject;
@property (copy, nonatomic) id /* block */ fallbackArtworkCatalogBlock;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)valueForProperty:(id)a0;
- (unsigned long long)persistentID;
- (id)initWithPersistentID:(unsigned long long)a0;
- (id)initWithModelObject:(id)a0;

@end
