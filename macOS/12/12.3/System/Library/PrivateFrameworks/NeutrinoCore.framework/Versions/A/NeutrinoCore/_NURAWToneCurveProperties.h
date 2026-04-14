@class NSData, CIFilter;

@interface _NURAWToneCurveProperties : NSObject {
    NSData *_curveData;
    CIFilter *_rawTRCFilter;
}

- (void).cxx_destruct;
- (id)initWithToneCurveFilter:(id)a0;
- (id)_generateCurveData;
- (id)curveData;
- (float)curveValueAt:(float)a0;

@end
