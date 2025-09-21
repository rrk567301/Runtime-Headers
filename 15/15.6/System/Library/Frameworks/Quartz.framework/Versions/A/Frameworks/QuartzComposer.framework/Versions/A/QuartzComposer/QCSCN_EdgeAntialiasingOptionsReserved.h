@class NSString;

@interface QCSCN_EdgeAntialiasingOptionsReserved : NSObject {
    id _parent;
    char _enable;
    double _trimFactor;
    double _minEdgeLength;
    double _minEdgeAngle;
    double _minTriangleArea;
    char _disableAntialiasingOfFacingEdges;
    char _debugMode;
    NSString *_name;
    NSString *_identifier;
}

@end
