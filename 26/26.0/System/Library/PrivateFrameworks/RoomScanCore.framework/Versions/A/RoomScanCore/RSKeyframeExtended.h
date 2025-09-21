@class NSUUID, NSString;

@interface RSKeyframeExtended : NSObject <RSKeyframe> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; void *__cap_; } _points;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; void *__cap_; } _pointsToWorld;
    struct vector<unsigned char __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>> { void *__begin_; void *__end_; void *__cap_; } _semLabels;
    struct vector<unsigned short __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>> { void *__begin_; void *__end_; void *__cap_; } _semVotes;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; void *__cap_; } _colors;
}

@property (retain, nonatomic) NSUUID *identifier;
@property (nonatomic) double timestamp;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraPose;
@property (nonatomic) unsigned int groupId;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) const void *points;
@property (readonly, nonatomic) const void *semanticLabels;
@property (readonly, nonatomic) const void *semanticVotes;
@property (readonly, nonatomic) void *colors;
@property (readonly, nonatomic) void *pointsToWorld;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)translateBy:(SEL)a0;
- (id)initWithDictionary:(id)a0 withGroupId:(unsigned int)a1;
- (void)filterOutPointsBeyondDistance:(float)a0;
- (id)initWithKeyframe:(id)a0;
- (void)processWithVoxelize:(BOOL)a0 asPythonApproach:(BOOL)a1 resample:(BOOL)a2 outlierRemove:(BOOL)a3;
- (void)rotateAlongZAxisRightHand:(float)a0;
- (void)setPoints:(void *)a0 semanticLabels:(void *)a1 semanticVotes:(void *)a2 colors:(void *)a3 count:(unsigned int)a4;

@end
