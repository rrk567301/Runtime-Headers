@class NSString, NSNumber;

@interface DGImageCompositeScaledOperation : DGOperation

@property (copy, nonatomic) NSString *inputCompositeImagePath;
@property (copy, nonatomic) NSString *inputCropRect;
@property (copy, nonatomic) NSString *destinationSize;
@property (copy, nonatomic) NSString *sourceSize;
@property (copy, nonatomic) NSNumber *inputOpacity;
@property (copy, nonatomic) NSNumber *inputScale;
@property (copy, nonatomic) NSNumber *inputRectPointLocation;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (void)setNilValueForKey:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)isPostGeometryOperation;

@end
