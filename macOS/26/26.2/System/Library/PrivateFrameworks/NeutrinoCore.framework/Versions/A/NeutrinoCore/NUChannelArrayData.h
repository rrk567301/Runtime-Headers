@class NSArray;

@interface NUChannelArrayData : NUChannelData

@property (readonly, copy, nonatomic) NSArray *array;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)initWithFormat:(id)a0;
- (id)initWithArray:(id)a0 itemFormat:(id)a1;

@end
