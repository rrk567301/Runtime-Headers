@class NSDictionary, NSArray;

@interface EntityCleanup : NSObject {
    void /* function */ entitiesExcludedFromEmojiCleanup;
    void /* function */ specialCharactersToRemove;
    void /* function */ entitiesExcludedFromSpecialCharacterCleanup;
    void /* function */ applyRegex;
}

@property (nonatomic, readonly) BOOL enableDatatypeCleanupFromNonAppEntities;
@property (nonatomic, readonly) BOOL enableEntityCleanup;
@property (nonatomic, readonly) BOOL enableEmojiCleanupFromAppEntities;
@property (nonatomic, readonly) BOOL enableEmojiCleanupFromNonAppEntities;
@property (nonatomic, readonly) NSDictionary *entitiesExcludedFromEmojiCleanup;
@property (nonatomic, readonly) BOOL enableSpecialCharacterCleanupFromAppEntities;
@property (nonatomic, readonly) BOOL enableSpecialCharacterCleanupFromNonAppEntities;
@property (nonatomic, readonly) NSArray *specialCharactersToRemove;
@property (nonatomic, readonly) NSDictionary *entitiesExcludedFromSpecialCharacterCleanup;
@property (nonatomic, readonly) NSDictionary *applyRegex;

- (void).cxx_destruct;

@end
