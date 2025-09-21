@class QCSCN_Node;

@interface QCSCN_CameraControlEventHandlerReserved : NSObject {
    QCSCN_Node *_freeViewCameraNode;
    struct CGPoint { double x; double y; } _initialPoint;
    struct C3DMatrix4x4 { union { double components[16]; double m[4][4]; } ; } _initialMatrix;
    double _initialZoom;
    double _savedZfar;
    double _savedZnear;
    double _originalFovX;
    double _originalFovY;
    double _originalMagX;
    double _originalMagY;
    double _zoomFactor;
    struct _SCNVector3 { double x; double y; double z; } _clickOrigin;
    char _stickyMove;
    struct CGPoint { double x; double y; } _stickyDirection;
    struct CGPoint { double x; double y; } _lastDragLocation;
    double _lastDragTime;
    int _cameraStickyAxis;
    struct C3DSphere { double radius; struct _SCNVector3 { double x; double y; double z; } center; } _viewedObjectSphere;
    char _hasCheckedIfViewingAnObject;
    char _isViewingAnObject;
    char _isViewedObjectSphereComputed;
    char _alternateMode;
    int _mode;
    char _upDirIsSet;
    struct _SCNVector3 { double x; double y; double z; } _gimbalLockVector;
    char _gimbalLockMode;
    struct _SCNVector3 { double x; double y; double z; } _upDir;
    char _automaticCameraTarget;
    struct _SCNVector3 { double x; double y; double z; } _cameraTarget;
    char _inertia;
    double _friction;
    struct CGPoint { double x; double y; } _totalDragWithInertia;
    struct CGPoint { double x; double y; } _inertiaVelocity;
    double _lastSimulationTime;
    char _inertiaRunning;
}

- (void)dealloc;
- (void)finalize;

@end
