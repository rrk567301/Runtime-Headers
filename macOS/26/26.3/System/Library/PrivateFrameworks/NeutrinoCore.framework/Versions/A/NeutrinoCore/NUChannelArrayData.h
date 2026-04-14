@class NSArray;

@interface NUChannelArrayData : NUChannelData

@property (readonly, copy, nonatomic) NSArray *array;

- (id)debugDescription;
- (id)description;
- (id)initWithFormat:(id)a0;
- (void).cxx_destruct;
- (id)value;
- (id)initWithArray:(id)a0 itemFormat:(id)a1;

@end
