@class NSArray, NSDictionary, NSString, NSEntityDescription;

@interface NSEntityStoreMapping : NSStoreMapping {
    NSEntityDescription *_entity;
    NSDictionary *_propertyMappings;
    NSArray *_primaryKeys;
    BOOL _isSingleTableEntity;
    NSString *_subentityColumn;
    unsigned int _subentityID;
}

- (id)entity;
- (id)initWithEntity:(id)a0;
- (id)subentityColumn;
- (unsigned int)subentityID;
- (BOOL)isEqual:(id)a0;
- (id)primaryKeys;
- (BOOL)isSingleTableEntity;
- (id)description;
- (id)propertyMappings;
- (void)dealloc;

@end
