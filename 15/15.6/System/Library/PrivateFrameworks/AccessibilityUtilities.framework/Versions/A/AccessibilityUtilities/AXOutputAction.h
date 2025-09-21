@class NSString, AXIndexMap;

@interface AXOutputAction : NSObject <NSCopying>

@property (retain, nonatomic) NSString *string;
@property (retain, nonatomic) NSString *brailleString;
@property (readonly, nonatomic) NSString *originalString;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeOfString;
@property (nonatomic) char generatesBraille;
@property (nonatomic) char performPunctuationTranslation;
@property (nonatomic) char replaceCommas;
@property (nonatomic) char wasDivided;
@property (readonly, nonatomic) AXIndexMap *outputVariants;
@property (readonly, nonatomic) unsigned long long outputActionID;

+ (unsigned long long)newOutputActionID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfString;
- (id)initWithAXAction:(id)a0;
- (id)initWithString:(id)a0 brailleString:(id)a1;
- (id)objectForVariant:(long long)a0;
- (void)removeObjectForVariant:(long long)a0;
- (void)setObject:(id)a0 forVariant:(long long)a1;
- (void)setString:(id)a0 overrideOriginalString:(char)a1;

@end
