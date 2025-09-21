@class NSString, NSArray, NSMutableArray;

@interface BRLTBrailleString : NSObject <NSCopying> {
    NSMutableArray *_brailleChars;
}

@property (readonly, nonatomic) NSString *unicode;
@property (readonly, nonatomic) NSArray *brailleChars;
@property (readonly, nonatomic) unsigned long long length;

+ (id)brfTable;
+ (id)brfToUnicode:(id)a0;
+ (id)dinToUnicode:(id)a0;
+ (char)isValidBRF:(id)a0;
+ (id)unicodeToBestEffortBrf:(id)a0;
+ (id)unicodeToDin:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)bestEffortBrf;
- (id)initWithBrailleChars:(id)a0;
- (id)initWithBrf:(id)a0;
- (id)initWithUnicode:(id)a0;
- (char)isEqualToBrailleString:(id)a0;

@end
