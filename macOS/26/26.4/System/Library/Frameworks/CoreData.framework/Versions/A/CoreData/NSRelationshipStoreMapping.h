@class NSString, NSArray;

@interface NSRelationshipStoreMapping : NSPropertyStoreMapping {
    NSString *_destinationEntityExternalName;
    NSArray *_foreignKeys;
    NSArray *_joins;
    unsigned int _joinSemantic;
}

- (id)foreignKeys;
- (id)relationship;
- (unsigned int)joinSemantic;
- (BOOL)isEqual:(id)a0;
- (id)destinationEntityExternalName;
- (id)joins;
- (void)dealloc;

@end
