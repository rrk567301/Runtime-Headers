@class NSString, NSNumber;

@interface TSKPicaFormatter : NSFormatter

@property (copy, nonatomic) NSString *picaSeparator;
@property (copy, nonatomic) NSNumber *minimum;
@property (copy, nonatomic) NSNumber *maximum;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (id)initWithPicaSeparator:(id)a0;

@end
