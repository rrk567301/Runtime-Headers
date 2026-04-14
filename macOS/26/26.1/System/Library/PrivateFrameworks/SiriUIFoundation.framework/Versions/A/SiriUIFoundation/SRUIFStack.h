@class NSArray, NSMutableArray;

@interface SRUIFStack : NSObject <NSCopying>

@property (readonly, nonatomic, getter=_elements) NSMutableArray *elements;
@property (readonly, nonatomic) id topObject;
@property (readonly, copy, nonatomic) NSArray *allObjects;

- (id)copy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArray:(id)a0;
- (id)init;
- (id)initWithStack:(id)a0;

@end
