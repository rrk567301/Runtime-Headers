@class NSMutableSet;

@interface NSAccessibilitySectionSearchElement : NSObject

@property (readonly, nonatomic) id element;
@property (retain, nonatomic) NSMutableSet *searchKeys;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithElement:(id)a0;

@end
