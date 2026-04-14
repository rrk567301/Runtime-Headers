@class NSNumber;

@interface MTRDataTypeViewportStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *x1;
@property (copy, nonatomic) NSNumber *y1;
@property (copy, nonatomic) NSNumber *x2;
@property (copy, nonatomic) NSNumber *y2;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
