@class NSString;

@interface PRMonogramStringValidator : NSObject

@property (retain, nonatomic) NSString *inputString;

+ (char)isInputStringValid:(id)a0;
+ (char)isInputStringValidAsMonogram:(id)a0;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (char)inputStringContainsValidCharacters;
- (char)inputStringHasCorrectNumberOfCharacters;
- (char)inputStringHasCorrectNumberOfCharactersAsMonogram;
- (char)isInputStringValid;
- (char)isInputStringValidAsMonogram;

@end
