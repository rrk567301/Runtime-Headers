@class NSString;

@interface DGControlPoint : NSObject <NSCopying, DGOperationCoding>

@property (readonly, nonatomic) double x;
@property (readonly, nonatomic) double y;
@property (readonly, nonatomic, getter=isSelected) char selected;
@property (readonly, nonatomic, getter=isHidden) char hidden;
@property (readonly, nonatomic, getter=isEditable) char editable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controlPointWithX:(double)a0 y:(double)a1 selected:(char)a2 editable:(char)a3 hidden:(char)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (double)_pinValue:(double)a0;
- (id)controlPointOffsetBy:(struct { double x0; double x1; })a0;
- (struct { double x0; double x1; })curvePoint;
- (id)initWithX:(double)a0 y:(double)a1 selected:(char)a2 editable:(char)a3 hidden:(char)a4;

@end
