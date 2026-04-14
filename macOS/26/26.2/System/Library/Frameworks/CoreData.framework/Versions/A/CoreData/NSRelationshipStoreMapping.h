@class NSString, NSArray;

@interface NSRelationshipStoreMapping : NSPropertyStoreMapping {
    NSString *_destinationEntityExternalName;
    NSArray *_foreignKeys;
    NSArray *_joins;
    unsigned int _joinSemantic;
}

- (id)foreignKeys;
- (unsigned int)joinSemantic;
- (id)destinationEntityExternalName;
- (id)joins;
- (id)relationship;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;

@end
