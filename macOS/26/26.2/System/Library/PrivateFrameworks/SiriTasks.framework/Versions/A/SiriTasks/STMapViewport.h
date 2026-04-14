@class NSArray;

@interface STMapViewport : STSiriModelObject

@property (nonatomic) double northLatitude;
@property (nonatomic) double southLatitude;
@property (nonatomic) double eastLongitude;
@property (nonatomic) double westLongitude;
@property (nonatomic) double timeSinceViewportChanged;
@property (nonatomic) double timeSinceViewportEnteredForeground;
@property (copy, nonatomic) NSArray *viewportVertices;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_aceContextObjectValue;

@end
