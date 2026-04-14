@class NSString, NSNumber;

@interface DGImageCompositeScaledOperation : DGOperation

@property (copy, nonatomic) NSString *inputCompositeImagePath;
@property (copy, nonatomic) NSString *inputCropRect;
@property (copy, nonatomic) NSString *destinationSize;
@property (copy, nonatomic) NSString *sourceSize;
@property (copy, nonatomic) NSNumber *inputOpacity;
@property (copy, nonatomic) NSNumber *inputScale;
@property (copy, nonatomic) NSNumber *inputRectPointLocation;

+ (id)outputKeys;
+ (id)attributes;
+ (id)inputKeys;
+ (id)_stringsTableName;

- (void)setNilValueForKey:(id)a0;
- (id)initWithOperation:(id)a0;
- (id)_filter;
- (id)init;
- (void)dealloc;
- (BOOL)isPostGeometryOperation;

@end
