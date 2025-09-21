@class NSNumber;

@interface BFProsodicState : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *rate;
@property (retain, nonatomic) NSNumber *pitchModulation;
@property (retain, nonatomic) NSNumber *pitchBase;
@property (retain, nonatomic) NSNumber *volume;
@property (nonatomic) char textLiteralMode;
@property (nonatomic) char numberLiteralMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
