@class NUChannelControlFormat;

@interface NUChannelControlData : NUChannelData {
    id _data;
}

@property (readonly, nonatomic) NUChannelControlFormat *controlFormat;

+ (id)controlDataWithAdjustment:(id)a0;
+ (id)controlDataWithComposition:(id)a0;
+ (id)controlDataWithSetting:(id)a0 value:(id)a1;
+ (id)controlDataWithSource:(id)a0;

- (id)compactDescription;
- (id)value;
- (id)debugDescription;
- (long long)compare:(id)a0;
- (id)cardinality;
- (id)description;
- (id)initWithFormat:(id)a0;
- (BOOL)isNumber;
- (void).cxx_destruct;
- (BOOL)isBoolean;
- (long long)compareToControlData:(id)a0;
- (id)initWithData:(id)a0 format:(id)a1;
- (id)initWithData:(id)a0 schema:(id)a1;
- (id)initWithSetting:(id)a0 value:(id)a1;
- (id)subdataAtIndex:(unsigned long long)a0 error:(out id *)a1;
- (id)subdataForChannel:(id)a0 error:(out id *)a1;

@end
