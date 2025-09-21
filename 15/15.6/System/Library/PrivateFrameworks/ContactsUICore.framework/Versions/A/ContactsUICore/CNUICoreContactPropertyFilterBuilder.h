@interface CNUICoreContactPropertyFilterBuilder : NSObject

@property (class, readonly, nonatomic) CNUICoreContactPropertyFilterBuilder *managedContactsFilterBuilder;
@property (class, readonly, nonatomic) CNUICoreContactPropertyFilterBuilder *whitelistedContactsFilterBuilder;

@property (nonatomic) char excludeNickname;
@property (nonatomic) char excludePhoto;
@property (nonatomic) char excludeNote;
@property (nonatomic) char excludeRelationships;

- (id)build;

@end
