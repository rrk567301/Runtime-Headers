@class NSString, IPAAdjustmentStack;

@interface IPAAdjustmentEnvelope : NSObject <NSCopying>

@property (retain, nonatomic) IPAAdjustmentStack *adjustmentStack;
@property (retain, nonatomic) NSString *originator;
@property (retain, nonatomic) NSString *format;
@property (retain, nonatomic) NSString *formatVersion;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)containsPhotoAdjustments;
- (BOOL)containsVideoAdjustments;
- (id)photoAdjustmentStack;
- (id)videoAdjustmentStack;

@end
