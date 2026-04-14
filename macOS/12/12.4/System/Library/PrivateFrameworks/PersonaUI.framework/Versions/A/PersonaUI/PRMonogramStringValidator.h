@class NSString;

@interface PRMonogramStringValidator : NSObject

@property (retain, nonatomic) NSString *inputString;

+ (BOOL)isInputStringValidAsMonogram:(id)a0;
+ (BOOL)isInputStringValid:(id)a0;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)isInputStringValid;
- (BOOL)isInputStringValidAsMonogram;
- (BOOL)inputStringHasCorrectNumberOfCharacters;
- (BOOL)inputStringContainsValidCharacters;
- (BOOL)inputStringHasCorrectNumberOfCharactersAsMonogram;

@end
