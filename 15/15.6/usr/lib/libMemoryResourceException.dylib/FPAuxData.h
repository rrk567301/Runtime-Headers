@interface FPAuxData : NSObject <FPAuxDataType>

@property (readonly, nonatomic) long long value;
@property (readonly, nonatomic, getter=shouldAggregate) char aggregate;
@property (readonly, nonatomic) char supportsFormattedValue;
@property (copy, nonatomic) id /* block */ formatter;
@property (readonly, nonatomic) const char *formattedValue;
@property (readonly, nonatomic) char fp_isContainer;
@property (readonly, nonatomic) id fp_jsonRepresentation;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(long long)a0 shouldAggregate:(char)a1;

@end
