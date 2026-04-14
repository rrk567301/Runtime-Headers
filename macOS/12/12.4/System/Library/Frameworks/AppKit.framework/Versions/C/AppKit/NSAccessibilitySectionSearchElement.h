@class NSMutableSet;

@interface NSAccessibilitySectionSearchElement : NSObject

@property (readonly, nonatomic) id element;
@property (retain, nonatomic) NSMutableSet *searchKeys;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithElement:(id)a0;

@end
