@class NSString, MLMultiArray, NSDictionary, MLSequence, NSObject;

@interface MLFeatureValue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) id value;
@property (retain, nonatomic) NSObject *objectValue;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic, getter=isUndefined) char undefined;
@property (readonly, nonatomic) long long int64Value;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) MLMultiArray *multiArrayValue;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) struct __CVBuffer { } *imageBufferValue;
@property (readonly, nonatomic) MLSequence *sequenceValue;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRectFromOptions:(id)a0;
+ (id)featureValueOfType:(long long)a0 fromObject:(id)a1 error:(id *)a2;
+ (id)featureValueWithCGImage:(struct CGImage { } *)a0 constraint:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)featureValueWithCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 constraint:(id)a2 options:(id)a3 error:(id *)a4;
+ (id)featureValueWithCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 pixelsWide:(long long)a2 pixelsHigh:(long long)a3 pixelFormatType:(unsigned int)a4 options:(id)a5 error:(id *)a6;
+ (id)featureValueWithCGImage:(struct CGImage { } *)a0 pixelsWide:(long long)a1 pixelsHigh:(long long)a2 pixelFormatType:(unsigned int)a3 options:(id)a4 error:(id *)a5;
+ (id)featureValueWithDictionary:(id)a0 error:(id *)a1;
+ (id)featureValueWithDouble:(double)a0;
+ (id)featureValueWithImageAtURL:(id)a0 constraint:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)featureValueWithImageAtURL:(id)a0 orientation:(unsigned int)a1 constraint:(id)a2 options:(id)a3 error:(id *)a4;
+ (id)featureValueWithImageAtURL:(id)a0 orientation:(unsigned int)a1 pixelsWide:(long long)a2 pixelsHigh:(long long)a3 pixelFormatType:(unsigned int)a4 options:(id)a5 error:(id *)a6;
+ (id)featureValueWithImageAtURL:(id)a0 pixelsWide:(long long)a1 pixelsHigh:(long long)a2 pixelFormatType:(unsigned int)a3 options:(id)a4 error:(id *)a5;
+ (id)featureValueWithInt64:(long long)a0;
+ (id)featureValueWithInt64KeyDictionary:(id)a0;
+ (id)featureValueWithMultiArray:(id)a0;
+ (id)featureValueWithPixelBuffer:(struct __CVBuffer { } *)a0;
+ (id)featureValueWithSequence:(id)a0;
+ (id)featureValueWithState:(id)a0;
+ (id)featureValueWithString:(id)a0;
+ (id)featureValueWithStringKeyDictionary:(id)a0;
+ (id)internalFeatureValueWithState:(id)a0;
+ (id)undefinedFeatureValueWithType:(long long)a0;
+ (unsigned long long)visionCropAndScaleOptionFromOptions:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getFeatureSize:(id *)a0;
- (id)debugQuickLookObject;
- (id)getFeatureSize:(id *)a0 ndArrayMode:(char)a1;
- (id)initWithUndefinedValueAndType:(long long)a0;
- (id)initWithValue:(id)a0 type:(long long)a1;
- (id)internalStateValue;
- (char)isEqualToFeatureValue:(id)a0;
- (id)stateValue;

@end
