@class NSDictionary, NSSet;

@interface CESREntityCleanupConfig : NSObject

@property (readonly, nonatomic) BOOL enableDatatypeCleanupFromNonAppEntities;
@property (readonly, nonatomic) BOOL enableEmojiCleanupFromAppEntities;
@property (readonly, nonatomic) BOOL enableEmojiCleanupFromNonAppEntities;
@property (readonly, nonatomic) NSDictionary *keepEmojis;
@property (readonly, nonatomic) BOOL enableSpecialCharacterCleanupFromAppEntities;
@property (readonly, nonatomic) BOOL enableSpecialCharacterCleanupFromNonAppEntities;
@property (readonly, nonatomic) NSSet *specialCharactersToRemove;
@property (readonly, nonatomic) NSDictionary *keepSpecialCharacters;
@property (readonly, nonatomic) NSDictionary *applyRegex;

- (id)description;
- (void).cxx_destruct;
- (BOOL)_parseJsonObject:(id)a0;
- (id)initWithJsonObject:(id)a0;

@end
