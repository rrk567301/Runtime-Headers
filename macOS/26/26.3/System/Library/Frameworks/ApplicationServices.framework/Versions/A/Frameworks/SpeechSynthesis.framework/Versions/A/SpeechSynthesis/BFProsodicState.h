@class NSNumber;

@interface BFProsodicState : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *rate;
@property (retain, nonatomic) NSNumber *pitchModulation;
@property (retain, nonatomic) NSNumber *pitchBase;
@property (retain, nonatomic) NSNumber *volume;
@property (nonatomic) BOOL textLiteralMode;
@property (nonatomic) BOOL numberLiteralMode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
