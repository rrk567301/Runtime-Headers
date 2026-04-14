@class NSMutableDictionary, NSCharacterSet;

@interface TIInputModeParser : NSObject {
    NSMutableDictionary *_inputModeDicts;
    NSCharacterSet *_invalidCharacterSet;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)stringByReplacingInvalidCharactersWithUnderscores:(id)a0;
- (id)parseInputMode:(id)a0;

@end
