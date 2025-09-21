@interface SCRWindowState : NSObject

@property struct CGPoint { double x; double y; } sourceOrigin;
@property struct CGPoint { double x; double y; } destinationOrigin;
@property (nonatomic) char needToRestoreWindowPosition;
@property (nonatomic) char needToRestoreDesktop;

@end
