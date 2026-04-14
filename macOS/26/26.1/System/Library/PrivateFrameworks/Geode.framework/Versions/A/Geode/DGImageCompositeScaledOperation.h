@class NSString, NSNumber;

@interface DGImageCompositeScaledOperation : DGOperation

@property (copy, nonatomic) NSString *inputCompositeImagePath;
@property (copy, nonatomic) NSString *inputCropRect;
@property (copy, nonatomic) NSString *destinationSize;
@property (copy, nonatomic) NSString *sourceSize;
@property (copy, nonatomic) NSNumber *inputOpacity;
@property (copy, nonatomic) NSNumber *inputScale;
@property (copy, nonatomic) NSNumber *inputRectPointLocation;

+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (void)setNilValueForKey:(id)a0;
- (void)dealloc;
- (id)init;
- (BOOL)isPostGeometryOperation;

@end
