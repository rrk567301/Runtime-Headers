@class NSString;

@interface AXNamedReplayableGesture : AXMutableReplayableGesture

@property (retain, nonatomic) NSString *name;
@property (nonatomic) char hasLocalizableName;
@property (nonatomic) char shouldPerformAtOriginalLocation;

+ (char)supportsSecureCoding;
+ (id)gestureWithPoints:(id)a0 times:(id)a1 forces:(id)a2;
+ (id)_fingerIdentifierForFingerAtIndex:(unsigned long long)a0;
+ (id)gestureWithLegacyFormatDictionary:(id)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)gestureShiftedByOffset:(struct CGPoint { double x0; double x1; })a0;

@end
