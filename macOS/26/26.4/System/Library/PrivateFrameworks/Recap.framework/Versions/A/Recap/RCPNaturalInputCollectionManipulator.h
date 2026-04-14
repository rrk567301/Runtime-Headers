@interface RCPNaturalInputCollectionManipulator : NSObject <NSCopying>

@property (readonly) struct CGPoint { double x; double y; } location;
@property (readonly) double zPosition;
@property (readonly) long long sourceGroup;
@property (readonly) long long interactionMethod;
@property (readonly) BOOL isOpen;
@property (readonly) struct { void /* unknown type, empty encoding */ vector; } orientation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0 zPosition:(double)a1 orientation:(struct { })a2 sourceGroup:(long long)a3 interactionMethod:(long long)a4 isOpen:(BOOL)a5;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0 zPosition:(double)a1 sourceGroup:(long long)a2 interactionMethod:(long long)a3 isOpen:(BOOL)a4;

@end
