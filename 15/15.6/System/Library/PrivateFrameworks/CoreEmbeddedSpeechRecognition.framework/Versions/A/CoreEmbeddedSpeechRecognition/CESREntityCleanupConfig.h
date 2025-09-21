@class NSDictionary, NSSet;

@interface CESREntityCleanupConfig : NSObject

@property (readonly, nonatomic) char enableDatatypeCleanupFromNonAppEntities;
@property (readonly, nonatomic) char enableEmojiCleanupFromAppEntities;
@property (readonly, nonatomic) char enableEmojiCleanupFromNonAppEntities;
@property (readonly, nonatomic) NSDictionary *keepEmojis;
@property (readonly, nonatomic) char enableSpecialCharacterCleanupFromAppEntities;
@property (readonly, nonatomic) char enableSpecialCharacterCleanupFromNonAppEntities;
@property (readonly, nonatomic) NSSet *specialCharactersToRemove;
@property (readonly, nonatomic) NSDictionary *keepSpecialCharacters;
@property (readonly, nonatomic) NSDictionary *applyRegex;

- (id)description;
- (void).cxx_destruct;
- (char)_parseJsonObject:(id)a0;
- (id)initWithJsonObject:(id)a0;

@end
