@class NSString, NSArray;

@interface NSSuggestionItemSection : NSObject <NSCopying>

@property (copy) NSString *title;
@property (copy) NSArray *items;

- (id)initWithItems:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithTitle:(id)a0 items:(id)a1;

@end
