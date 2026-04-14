@class NSString;

@interface PRSCalculatorResult : SFSearchResult_SpotlightExtras <NSPasteboardWriting>

@property (retain, nonatomic) NSString *inputString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (unsigned __int128)rank;
- (int)type;
- (id)groupName;
- (unsigned __int128)score;
- (void)encodeWithCoder:(id)a0;
- (id)category;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)copyBasePropertiesOverToResult:(id)a0;
- (id)initWithDisplayName:(id)a0 inputString:(id)a1;
- (BOOL)isCalculation;
- (BOOL)isConversion;
- (BOOL)isCurrency;

@end
