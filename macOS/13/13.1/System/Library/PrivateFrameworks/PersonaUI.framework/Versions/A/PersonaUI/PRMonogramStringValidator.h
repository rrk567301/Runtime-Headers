@class NSString;

@interface PRMonogramStringValidator : NSObject

@property (retain, nonatomic) NSString *inputString;

+ (BOOL)isInputStringValid:(id)a0;
+ (BOOL)isInputStringValidAsMonogram:(id)a0;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)isInputStringValid;
- (BOOL)isInputStringValidAsMonogram;
- (BOOL)inputStringHasCorrectNumberOfCharacters;
- (BOOL)inputStringHasCorrectNumberOfCharactersAsMonogram;
- (BOOL)inputStringContainsValidCharacters;

@end
