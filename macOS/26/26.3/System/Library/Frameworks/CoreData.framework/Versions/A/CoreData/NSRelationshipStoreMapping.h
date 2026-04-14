@class NSString, NSArray;

@interface NSRelationshipStoreMapping : NSPropertyStoreMapping {
    NSString *_destinationEntityExternalName;
    NSArray *_foreignKeys;
    NSArray *_joins;
    unsigned int _joinSemantic;
}

- (id)foreignKeys;
- (id)joins;
- (id)destinationEntityExternalName;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned int)joinSemantic;
- (id)relationship;

@end
