@class NSString;

@interface AXEventPointerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double pointerX;
@property (nonatomic) double pointerY;
@property (nonatomic) double pointerZ;
@property (nonatomic) double pointerAccelX;
@property (nonatomic) double pointerAccelY;
@property (nonatomic) double pointerAccelZ;
@property (nonatomic) char isPointerMove;
@property (nonatomic) double pointerButtonMask;
@property (nonatomic) double pointerButtonNumber;
@property (nonatomic) double pointerButtonClickCount;
@property (nonatomic) double pointerButtonPressure;
@property (nonatomic) char pointerIsAbsolute;
@property (retain, nonatomic) NSString *deviceTypeHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)accessibilityEventRepresentationTabularDescription;

@end
