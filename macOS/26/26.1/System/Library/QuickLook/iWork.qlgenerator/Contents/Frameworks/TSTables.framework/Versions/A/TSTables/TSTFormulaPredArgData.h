@class NSString, TSCENumberValue, NSDate, NSNumber;

@interface TSTFormulaPredArgData : NSObject <NSCopying> {
    struct TSUDecimal { struct { unsigned long long w[2]; } _decimal; } _decimal;
    unsigned char _units;
}

@property (readonly, nonatomic) unsigned char dataType;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long year;
@property (readonly, nonatomic) long long month;
@property (readonly, nonatomic) long long day;
@property (readonly, nonatomic) NSNumber *number;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, nonatomic) double durationValue;
@property (readonly, nonatomic) unsigned char durationUnits;
@property (readonly) TSCENumberValue *duration;

+ (id)getPredArgDataFromCell:(id)a0;

- (id)initWithDate:(id)a0;
- (unsigned long long)hash;
- (id)initWithNumber:(id)a0;
- (id)initWithString:(id)a0;
- (id).cxx_construct;
- (id)initWithDouble:(double)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBool:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initFromArchive:(const void *)a0;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithDuration:(double)a0 units:(unsigned char)a1;

@end
