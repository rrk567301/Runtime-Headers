@interface FPAuxData : NSObject <FPAuxDataType>

@property (readonly, nonatomic) long long value;
@property (readonly, nonatomic, getter=shouldAggregate) BOOL aggregate;
@property (readonly, nonatomic) BOOL supportsFormattedValue;
@property (copy, nonatomic) id /* block */ formatter;
@property (readonly, nonatomic) const char *formattedValue;
@property (readonly, nonatomic) BOOL fp_isContainer;
@property (readonly, nonatomic) id fp_jsonRepresentation;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(long long)a0 shouldAggregate:(BOOL)a1;

@end
