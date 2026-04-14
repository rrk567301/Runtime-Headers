@class NSArray, NSString, NSImage;

@interface ICSearchSuggestion : NSObject <NSCopying>

@property (class, readonly, nonatomic) NSArray *orderedSearchSuggestions;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *suggestionItemTitle;
@property (readonly, nonatomic) NSString *tokenTitle;
@property (readonly, nonatomic) NSString *subQueryString;
@property (readonly, nonatomic) NSImage *iconImage;

+ (unsigned long long)suggestionTypeOfFirstItemInSuggestions:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;

@end
