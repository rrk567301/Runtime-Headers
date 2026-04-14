@class NSString, NSNumber;

@interface MTRDataTypeTestGlobalStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *myBitmap;
@property (copy, nonatomic) NSNumber *myEnum;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
