@interface AXMediaUtilities.AXMClickabilityDetectorResult : NSObject {
    void /* unknown type, empty encoding */ box;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ labelName;
    void /* unknown type, empty encoding */ confidence;
}

- (void).cxx_destruct;
- (id)init;
- (id)resultLabelName;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })resultBox;
- (double)resultConfidence;
- (long long)resultLabel;

@end
