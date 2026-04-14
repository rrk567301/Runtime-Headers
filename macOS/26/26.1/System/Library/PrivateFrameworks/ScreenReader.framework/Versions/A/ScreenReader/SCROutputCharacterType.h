@class NSDictionary;

@interface SCROutputCharacterType : NSObject {
    int _characterTypeLookupArray[512];
}

@property (class, readonly) SCROutputCharacterType *shared;

@property (nonatomic) BOOL needToRebuildDefaultLanguageTextProcessingProperties;
@property (retain, nonatomic) NSDictionary *defaultLanguageTextProcessingProperties;

- (void).cxx_destruct;
- (id)init;
- (id)_textProcessingProperties;
- (int)typeForCharacter:(int)a0;
- (long long)typeForComposedCharacter:(id)a0;

@end
