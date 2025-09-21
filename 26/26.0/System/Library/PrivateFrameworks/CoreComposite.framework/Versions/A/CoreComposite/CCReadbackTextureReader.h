@interface CCReadbackTextureReader : NSObject {
    struct { struct { float planeDescriptor[2][3]; } fittingPlane; struct { float indexCount[2]; } vfwIndexRead; struct { float totalNearVirtualPixelsInGazeZone[2]; float totalFarPixelsInGazeZone[2]; float totalDepthOfNearVirtualPixelsInGazeZone[2]; float totalDepthOfFarVirtualPixelsInGazeZone[2]; } virtualPixelStats; } _output;
    unsigned long long _eyeCount;
}

@end
