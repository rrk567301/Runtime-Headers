@interface AXMBrailleCanvasDescription : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property (readonly) unsigned long long numberOfDiscretePinHeights;
@property (nonatomic) char hasConsistentHorizontalPinSpacing;
@property (nonatomic) char hasConsistentVerticalPinSpacing;
@property (nonatomic) double verticalPinSpacing;
@property (nonatomic) double horizontalPinSpacing;
@property (nonatomic) double interCellHorizontalSpacing;
@property (nonatomic) double interCellVerticalSpacing;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHeight:(unsigned long long)a0 width:(unsigned long long)a1 numberOfDiscretePinHeights:(unsigned long long)a2;

@end
