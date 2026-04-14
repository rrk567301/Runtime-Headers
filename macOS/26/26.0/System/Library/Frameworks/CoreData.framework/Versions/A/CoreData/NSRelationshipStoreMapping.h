@class NSString, NSArray;

@interface NSRelationshipStoreMapping : NSPropertyStoreMapping {
    NSString *_destinationEntityExternalName;
    NSArray *_foreignKeys;
    NSArray *_joins;
    unsigned int _joinSemantic;
}

- (id)foreignKeys;
- (unsigned int)joinSemantic;
- (id)relationship;
- (void)dealloc;
- (id)destinationEntityExternalName;
- (id)joins;
- (BOOL)isEqual:(id)a0;

@end
