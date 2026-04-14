@class NSString;

@interface PRSCalculatorResult : SFSearchResult_SpotlightExtras <NSPasteboardWriting>

@property (readonly) NSString *inputString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)type;
- (id)category;
- (unsigned __int128)score;
- (id)groupName;
- (unsigned __int128)rank;
- (BOOL)isCalculation;
- (id)initWithDisplayName:(id)a0 inputString:(id)a1;
- (BOOL)isConversion;
- (BOOL)isCurrency;

@end
