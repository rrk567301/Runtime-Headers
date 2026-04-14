@class NSUUID, NSMutableArray;

@interface RS3DSurface : NSObject <NSCopying, NSSecureCoding> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _polygon;
    struct vector<RSEdgeStatesType, std::allocator<RSEdgeStatesType>> { char *__begin_; char *__end_; struct __compressed_pair<RSEdgeStatesType *, std::allocator<RSEdgeStatesType>> { char *__value_; } __end_cap_; } _polygonEdgeStates;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _polygonEdgeConfidence;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property struct { void /* unknown type, empty encoding */ corners[4]; } quad;
@property float confidence;
@property BOOL completed;
@property int wallStatus;
@property int parentWallStatus;
@property BOOL occluded;
@property (nonatomic) void /* unknown type, empty encoding */ color;
@property (nonatomic) unsigned char type;
@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSUUID *parentIdentifier;
@property (retain) NSMutableArray *children;
@property (weak) RS3DSurface *parent;
@property unsigned int groupId;
@property void /* unknown type, empty encoding */ normal;
@property BOOL isFakeWall;
@property float depth;
@property (nonatomic) struct { char states[4]; } edgeStates;
@property (nonatomic) struct { float confidence[4]; } edgeConfidence;
@property (nonatomic) char individualUpdate;
@property void /* unknown type, empty encoding */ appearPosePts;
@property void /* unknown type, empty encoding */ appearMajorViews;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ dimensions;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } transform;
@property (readonly, nonatomic) const void *polygon;
@property (readonly, nonatomic) unsigned long long polygonSize;
@property (readonly, nonatomic) const char *polygonEdgeStates;
@property (readonly, nonatomic) const float *polygonEdgeConfidence;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)fillWithDictionaryRepresentation:(id)a0;
- (void)setCeilingHeight:(float)a0;
- (id)initWithDictionaryRepresentation:(id)a0 WithGroupId:(unsigned int)a1;
- (void)setHeightWithCeiling:(float)a0 floor:(float)a1;
- (void)assignPolygon:(const void *)a0 polygonEdgeStates:(const char *)a1 polygonEdgeConfidence:(const float *)a2 count:(unsigned long long)a3;

@end
