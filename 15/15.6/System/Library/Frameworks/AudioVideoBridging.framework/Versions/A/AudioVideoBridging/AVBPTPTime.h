@interface AVBPTPTime : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long nanosecondsSinceEpoch;
@property (readonly, nonatomic) unsigned long long seconds;
@property (readonly, nonatomic) unsigned int nanoseconds;
@property (readonly, nonatomic) unsigned long long grandmasterIdentity;
@property (readonly, nonatomic) unsigned short localPortNumber;
@property (readonly, nonatomic, getter=isPTPTimescale) char ptpTimescale;
@property (readonly, nonatomic, getter=isTimeTraceable) char timeTraceable;
@property (readonly, nonatomic, getter=isFrequencyTraceable) char frequencyTraceable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (unsigned long long)seconds;
- (unsigned int)nanoseconds;
- (id)initWithNanosecondsSinceEpoch:(unsigned long long)a0 onGrandmaster:(unsigned long long)a1 withLocalPortNumber:(unsigned short)a2 ptpTimescale:(char)a3 timeTraceable:(char)a4 frequencyTraceable:(char)a5;
- (id)initWithSeconds:(unsigned long long)a0 nanoseconds:(unsigned int)a1 onGrandmaster:(unsigned long long)a2 withLocalPortNumber:(unsigned short)a3 ptpTimescale:(char)a4 timeTraceable:(char)a5 frequencyTraceable:(char)a6;

@end
