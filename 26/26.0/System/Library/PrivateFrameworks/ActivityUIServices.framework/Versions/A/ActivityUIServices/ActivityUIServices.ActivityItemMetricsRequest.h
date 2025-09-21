@class _TtC18ActivityUIServices20SizeDimensionRequest, NSString, _TtC18ActivityUIServices18ActivityEdgeInsets, NSNumber;

@interface ActivityUIServices.ActivityItemMetricsRequest : NSObject <NSCopying, NSSecureCoding, BSXPCCoding> {
    void /* unknown type, empty encoding */ _widthRequest;
    void /* unknown type, empty encoding */ _heightRequest;
    void /* unknown type, empty encoding */ _edgeInsets;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) _TtC18ActivityUIServices20SizeDimensionRequest *widthRequest;
@property (nonatomic, retain) _TtC18ActivityUIServices20SizeDimensionRequest *heightRequest;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double clipMargin;
@property (nonatomic) double scaleFactor;
@property (nonatomic, retain) NSNumber *watchDisplayVariant;
@property (nonatomic, retain) _TtC18ActivityUIServices18ActivityEdgeInsets *edgeInsets;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } initialSize;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } maximumSize;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (BOOL)isValid;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithWidth:(id)a0 height:(id)a1 cornerRadius:(double)a2;
- (id)initWithWidth:(id)a0 height:(id)a1 cornerRadius:(double)a2 edgeInsets:(id)a3;
- (id)initWithWidth:(id)a0 height:(id)a1 cornerRadius:(double)a2 edgeInsets:(id)a3 clipMargin:(double)a4;
- (id)initWithWidth:(id)a0 height:(id)a1 cornerRadius:(double)a2 edgeInsets:(id)a3 clipMargin:(double)a4 scaleFactor:(double)a5;
- (id)initWithWidth:(id)a0 height:(id)a1 cornerRadius:(double)a2 edgeInsets:(id)a3 clipMargin:(double)a4 scaleFactor:(double)a5 watchDisplayVariant:(id)a6;
- (id)initWithWidth:(id)a0 height:(id)a1 cornerRadius:(double)a2 watchDisplayVariant:(id)a3;

@end
