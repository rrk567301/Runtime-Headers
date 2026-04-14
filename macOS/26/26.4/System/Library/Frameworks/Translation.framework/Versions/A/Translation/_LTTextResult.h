@class NSString, NSLocale, _LTLocalePair, NSAttributedString;

@interface _LTTextResult : NSObject

@property (readonly, copy, nonatomic) _LTLocalePair *localePair;
@property (readonly, copy, nonatomic) NSLocale *sourceLocale;
@property (readonly, copy, nonatomic) NSLocale *targetLocale;
@property (readonly, copy, nonatomic) NSString *sourceText;
@property (readonly, copy, nonatomic) NSString *targetText;
@property (readonly, copy, nonatomic) NSAttributedString *sourceAttributedText;
@property (readonly, copy, nonatomic) NSAttributedString *targetAttributedText;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;

- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithLocalePair:(id)a0 sourceAttributedText:(id)a1 targetAttributedText:(id)a2 clientIdentifier:(id)a3;
- (id)initWithLocalePair:(id)a0 sourceText:(id)a1 targetText:(id)a2 clientIdentifier:(id)a3;

@end
