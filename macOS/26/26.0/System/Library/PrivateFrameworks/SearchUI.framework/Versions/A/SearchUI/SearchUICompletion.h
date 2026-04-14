@class SearchUICommandHandler, NSString, NSAttributedString, SFImage;

@interface SearchUICompletion : NSObject

@property (retain) SearchUICommandHandler *commandHandler;
@property (retain, nonatomic) NSAttributedString *typedString;
@property (retain, nonatomic) NSAttributedString *completionString;
@property (retain, nonatomic) NSString *extensionString;
@property (readonly, nonatomic) NSString *bridgeString;
@property (readonly, nonatomic) SFImage *image;
@property (readonly, nonatomic) BOOL completionResultIsPotentiallyPunchout;
@property (readonly, nonatomic) BOOL isCompletionStringFullyMatched;
@property (readonly, nonatomic) NSString *copyableString;

+ (id)initWithAttributedTypedString:(id)a0 result:(id)a1 cardSection:(id)a2;
+ (id)initWithTypedString:(id)a0 result:(id)a1 cardSection:(id)a2;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })nonPartialRangeOfTypedString:(id)a0 inString:(id)a1;
+ (BOOL)stringMatchesWritingDirection:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)updateFields;
- (BOOL)isValidRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)calculationCommand;
- (id)completionStringToMatch;
- (id)completionStringWithString:(id)a0;
- (id)initWithTypedString:(id)a0 result:(id)a1 cardSection:(id)a2;
- (id)prefixMatchExtensionString;

@end
