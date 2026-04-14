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
- (id)propertyMappings;
- (id)entity;
- (BOOL)isSingleTableEntity;
- (BOOL)isEqual:(id)a0;
- (id)primaryKeys;
- (id)subentityColumn;
- (id)description;
- (unsigned int)subentityID;
- (void)dealloc;

@end
