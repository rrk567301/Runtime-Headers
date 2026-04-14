@class NSDictionary, NSMutableDictionary;

@interface SRCSSpokenCommandUtilities : NSObject {
    NSDictionary *_commandAttributes;
    NSMutableDictionary *_commandStringsTablesByLocaleIdentifier;
}

+ (id)sharedSpokenCommandUtilities;
+ (struct __CFStringTokenizer { } *)wordUnitStringTokenizerRefForLocaleIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)commandAttributes;
- (id)commandStringsTableForLocaleIdentifier:(id)a0;
- (void)_flushBuiltInCommandsStringsTable;
- (id)dictionaryForLocaleIdentifier:(id)a0 resourceFileName:(id)a1 resourceFileExtension:(id)a2;
- (id)dictionaryForLocaleIdentifier:(id)a0 bundle:(id)a1 resourceFileName:(id)a2 resourceFileExtension:(id)a3;
- (id)dictionaryForLocaleIdentifier:(id)a0 bundle:(id)a1 subDirectory:(id)a2 rootFileName:(id)a3 rootFileExtension:(id)a4;

@end
