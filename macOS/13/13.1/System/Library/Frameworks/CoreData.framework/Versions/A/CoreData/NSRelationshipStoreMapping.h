@class NSString, NSArray;

@interface NSRelationshipStoreMapping : NSPropertyStoreMapping {
    NSString *_destinationEntityExternalName;
    NSArray *_foreignKeys;
    NSArray *_joins;
    unsigned int _joinSemantic;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)relationship;
- (id)destinationEntityExternalName;
- (id)foreignKeys;
- (id)joins;
- (unsigned int)joinSemantic;

@end
