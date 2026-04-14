@class NSNumber;

@interface MTRDataTypeViewportStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *x1;
@property (copy, nonatomic) NSNumber *y1;
@property (copy, nonatomic) NSNumber *x2;
@property (copy, nonatomic) NSNumber *y2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
