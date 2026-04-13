@class NSDictionary, NSMutableDictionary;

@interface SRCSSpokenCommandUtilities : NSObject {
    NSDictionary *_commandAttributes;
    NSMutableDictionary *_commandStringsTablesByLocaleIdentifier;
}

+ (id)sharedSpokenCommandUtilities;

- (id)init;
- (void).cxx_destruct;
- (id)commandAttributes;
- (id)commandStringsTableForLocaleIdentifier:(id)a0;
- (void)_flushBuiltInCommandsStringsTable;
- (id)dictionaryForLocaleIdentifier:(id)a0 resourceFileName:(id)a1 resourceFileExtension:(id)a2;

@end
