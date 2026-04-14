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
- (id)description;
- (unsigned int)subentityID;
- (id)primaryKeys;
- (id)initWithEntity:(id)a0;
- (BOOL)isSingleTableEntity;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)subentityColumn;
- (id)propertyMappings;

@end
