@class NSArray;

@interface EMTSegmentInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *sourceTokenIDs;
@property (retain, nonatomic) NSArray *targetTokenIDs;
@property (nonatomic) BOOL isStable;
@property (nonatomic) BOOL isSourceSideBoundary;

+ (id)segmentInfo;
+ (id)segmentInfoWithData:(const void *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct SegmentInfo { int x0; int x1; BOOL x2; BOOL x3; BOOL x4; struct vector<int, std::allocator<int>> { int *x0; int *x1; int *x2; } x5; struct vector<int, std::allocator<int>> { int *x0; int *x1; int *x2; } x6; })getData;
- (void).cxx_destruct;

@end
