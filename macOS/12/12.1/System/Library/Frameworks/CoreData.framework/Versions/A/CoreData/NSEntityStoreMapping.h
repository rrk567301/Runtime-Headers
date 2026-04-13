@class NSArray, NSDictionary, NSString, NSEntityDescription;

@interface NSEntityStoreMapping : NSStoreMapping {
    NSEntityDescription *_entity;
    NSDictionary *_propertyMappings;
    NSArray *_primaryKeys;
    BOOL _isSingleTableEntity;
    NSString *_subentityColumn;
    unsigned int _subentityID;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)entity;
- (id)initWithEntity:(id)a0;
- (id)propertyMappings;
- (id)primaryKeys;
- (BOOL)isSingleTableEntity;
- (id)subentityColumn;
- (unsigned int)subentityID;

@end
