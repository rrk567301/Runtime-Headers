@class NSArray;

@interface NSSuggestionItemResponse : NSObject <NSCopying>

@property (copy) NSArray *itemSections;
@property long long phase;
@property long long preferredHighlight;

- (id)initWithItems:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithItemSections:(id)a0;

@end
