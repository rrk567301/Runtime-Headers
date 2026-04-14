@class NSString, NSArray;

@interface NSTextAlternatives : NSObject <NSSecureCoding> {
    NSString *_primaryString;
    NSArray *_alternativeStrings;
    id _internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL isLowConfidence;
@property (readonly, copy) NSString *primaryString;
@property (readonly, copy) NSArray *alternativeStrings;

- (id)alternatives;
- (id)originalText;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)alternativeAtIndex:(unsigned long long)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)identifier;
- (void)dealloc;
- (id)initWithPrimaryString:(id)a0 alternativeStrings:(id)a1;
- (void)noteSelectedAlternativeString:(id)a0;
- (id)initWithOriginalText:(id)a0 alternatives:(id)a1;
- (id)initWithOriginalText:(id)a0 alternatives:(id)a1 identifier:(id)a2;
- (id)initWithPrimaryString:(id)a0 alternativeStrings:(id)a1 identifier:(id)a2;
- (id)initWithPrimaryString:(id)a0 alternativeStrings:(id)a1 identifier:(id)a2 isLowConfidence:(BOOL)a3;
- (id)initWithPrimaryString:(id)a0 alternativeStrings:(id)a1 isLowConfidence:(BOOL)a2;
- (unsigned long long)numberOfAlternatives;

@end
