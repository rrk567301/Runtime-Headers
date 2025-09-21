@class NSMutableArray;

@interface PKInkFunction : NSObject

@property (nonatomic) unsigned long long inkProperty;
@property (nonatomic) unsigned long long inkInput;
@property (nonatomic) unsigned long long inputMask;
@property (nonatomic) unsigned long long deviceMask;
@property (nonatomic) unsigned long long math;
@property (retain, nonatomic) NSMutableArray *inputPoints;
@property (retain, nonatomic) NSMutableArray *maxInputPoints;
@property (retain, nonatomic) NSMutableArray *minOutputPoints;
@property (retain, nonatomic) NSMutableArray *maxOutputPoints;
@property (retain, nonatomic) NSMutableArray *outputPoints;
@property (nonatomic) unsigned long long functionType;
@property (retain, nonatomic) NSMutableArray *controlPoints;

- (id)description;
- (void).cxx_destruct;
- (id)initWithInputPoints:(id)a0 outputPoints:(id)a1 functionType:(unsigned long long)a2;
- (id)initWithProperty:(unsigned long long)a0 input:(unsigned long long)a1 math:(unsigned long long)a2 inputMask:(unsigned long long)a3 deviceMask:(unsigned long long)a4 inputPoints:(id)a5 maxInputPoints:(id)a6 minOutputPoints:(id)a7 maxOutputPoints:(id)a8 outputPoints:(id)a9 controlPoints:(id)a10 functionType:(unsigned long long)a11;
- (double)solveForInput:(double)a0;

@end
