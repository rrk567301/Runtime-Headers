@class NSArray, NSDictionary, NSString, NSEntityDescription;

@interface NSEntityStoreMapping : NSStoreMapping {
    NSEntityDescription *_entity;
    NSDictionary *_propertyMappings;
    NSArray *_primaryKeys;
    char _isSingleTableEntity;
    NSString *_subentityColumn;
    unsigned int _subentityID;
}

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (id)entity;
- (id)initWithEntity:(id)a0;
- (id)subentityColumn;
- (char)isSingleTableEntity;
- (id)primaryKeys;
- (id)propertyMappings;
- (unsigned int)subentityID;

@end
