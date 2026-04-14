@class NSArray;

@interface EMTStablePrefixState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *stablePrefixData;
@property (retain, nonatomic) NSArray *segmentInfoData;
@property (nonatomic) struct vector<int, std::allocator<int>> { int *x0; int *x1; int *x2; } data;
@property (nonatomic) struct vector<quasar::TranslationPhrase::SegmentInfo, std::allocator<quasar::TranslationPhrase::SegmentInfo>> { struct SegmentInfo *x0; struct SegmentInfo *x1; struct SegmentInfo *x2; } sourceSideData;
@property (nonatomic) BOOL isFinalReceived;

+ (id)stablePrefixState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
