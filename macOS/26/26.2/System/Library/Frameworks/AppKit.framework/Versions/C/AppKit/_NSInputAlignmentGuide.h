@class NSArray;
@protocol NSInputAlignmentGuide;

@interface _NSInputAlignmentGuide : NSObject {
    id<NSInputAlignmentGuide> _guide;
    long long _guideType;
    NSArray *_referenceValues;
    long long _representativeIndex;
}

- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)referenceValues;
- (struct CGPoint { double x0; double x1; })pointValueAtIndex:(unsigned long long)a0;
- (double)xDoubleValueAtIndex:(unsigned long long)a0;
- (double)yDoubleValueAtIndex:(unsigned long long)a0;

@end
