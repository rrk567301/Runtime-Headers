@class NSString;

@interface PRSCalculatorResult : SFSearchResult_SpotlightExtras <NSPasteboardWriting>

@property (retain, nonatomic) NSString *inputString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)groupName;
- (id)category;
- (id)initWithCoder:(id)a0;
- (unsigned __int128)score;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (int)type;
- (void).cxx_destruct;
- (unsigned __int128)rank;
- (void)copyBasePropertiesOverToResult:(id)a0;
- (id)initWithDisplayName:(id)a0 inputString:(id)a1;
- (BOOL)isCalculation;
- (BOOL)isConversion;
- (BOOL)isCurrency;

@end
