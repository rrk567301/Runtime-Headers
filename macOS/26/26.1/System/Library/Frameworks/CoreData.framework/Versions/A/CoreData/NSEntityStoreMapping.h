@class NSArray, NSDictionary, NSString, NSEntityDescription;

@interface NSEntityStoreMapping : NSStoreMapping {
    NSEntityDescription *_entity;
    NSDictionary *_propertyMappings;
    NSArray *_primaryKeys;
    BOOL _isSingleTableEntity;
    NSString *_subentityColumn;
    unsigned int _subentityID;
}

- (id)initWithEntity:(id)a0;
- (id)subentityColumn;
- (id)primaryKeys;
- (id)entity;
- (id)propertyMappings;
- (id)description;
- (void)dealloc;
- (unsigned int)subentityID;
- (BOOL)isSingleTableEntity;
- (BOOL)isEqual:(id)a0;

@end
