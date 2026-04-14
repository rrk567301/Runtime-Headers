@class NSString, NSSQLToOne;

@interface NSSQLForeignKey : NSSQLColumn {
    NSString *_name;
    NSSQLToOne *_toOne;
}

- (id)initForReadOnlyFetchingOfEntity:(id)a0 toOneRelationship:(id)a1;
- (id)toOneRelationship;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (void)dealloc;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)name;
- (id)initWithEntity:(id)a0 toOneRelationship:(id)a1;

@end
