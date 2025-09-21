@class NSArray, NSDictionary, NSString, NSEntityDescription;

@interface NSEntityStoreMapping : NSStoreMapping {
    NSEntityDescription *_entity;
    NSDictionary *_propertyMappings;
    NSArray *_primaryKeys;
    BOOL _isSingleTableEntity;
    NSString *_subentityColumn;
    unsigned int _subentityID;
}

- (id)primaryKeys;
- (id)entity;
- (id)propertyMappings;
- (void)dealloc;
- (BOOL)isSingleTableEntity;
- (id)subentityColumn;
- (id)description;
- (unsigned int)subentityID;
- (id)initWithEntity:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
