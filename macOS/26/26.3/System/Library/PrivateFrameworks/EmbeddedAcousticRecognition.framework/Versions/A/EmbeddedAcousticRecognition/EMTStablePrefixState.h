@class NSArray;

@interface EMTStablePrefixState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *stablePrefixData;
@property (retain, nonatomic) NSArray *segmentInfoData;
@property (nonatomic) struct vector<int, std::allocator<int>> { int *x0; int *x1; struct { int *x0; } x2; } data;
@property (nonatomic) struct vector<quasar::TranslationPhrase::SegmentInfo, std::allocator<quasar::TranslationPhrase::SegmentInfo>> { struct SegmentInfo *x0; struct SegmentInfo *x1; struct { struct SegmentInfo *x0; } x2; } sourceSideData;
@property (nonatomic) BOOL isFinalReceived;

+ (id)stablePrefixState;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
