@class NSString;

@interface PRMonogramStringValidator : NSObject

@property (retain, nonatomic) NSString *inputString;

+ (BOOL)isInputStringValid:(id)a0;
+ (BOOL)isInputStringValidAsMonogram:(id)a0;

- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (BOOL)inputStringContainsValidCharacters;
- (BOOL)inputStringHasCorrectNumberOfCharacters;
- (BOOL)inputStringHasCorrectNumberOfCharactersAsMonogram;
- (BOOL)isInputStringValid;
- (BOOL)isInputStringValidAsMonogram;

@end
