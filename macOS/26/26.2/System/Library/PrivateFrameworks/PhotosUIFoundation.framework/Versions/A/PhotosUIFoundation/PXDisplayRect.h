@class NSView, NSString;
@protocol PXAnonymousCoordinateSpace;

@interface PXDisplayRect : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ implementation;
}

@property (nonatomic, readonly) NSView<PXAnonymousCoordinateSpace> *coordinateSpace;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void).cxx_destruct;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInCoordinateSpace:(id)a0;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inCoordinateSpace:(id)a1;

@end
