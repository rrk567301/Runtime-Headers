@class NSString, NSCharacterSet, CDPUIEDPRecoveryTokenEntryField;

@interface CDPUIEDPRecoveryTokenEntryViewModel : NSObject {
    NSCharacterSet *_charactersAllowedWithoutModification;
    NSCharacterSet *_delimiters;
    NSCharacterSet *_allAllowedCharacters;
}

@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) CDPUIEDPRecoveryTokenEntryField *entryField;

- (id)init;
- (void).cxx_destruct;
- (char)canEnterText:(id)a0;
- (char)canEnterTextWithoutModification:(id)a0;
- (id)formattedFinalText:(id)a0;
- (char)tokenCanBeValidated;

@end
