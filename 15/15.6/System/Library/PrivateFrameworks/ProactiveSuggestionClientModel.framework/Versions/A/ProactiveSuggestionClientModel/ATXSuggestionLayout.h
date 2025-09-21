@class NSArray, NSUUID, NSString;

@interface ATXSuggestionLayout : NSObject <ATXSuggestionLayoutProtocol, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *oneByOneSuggestions;
@property (retain, nonatomic) NSArray *oneByTwoSuggestions;
@property (retain, nonatomic) NSArray *twoByTwoSuggestions;
@property (retain, nonatomic) NSArray *oneByFourSuggestions;
@property (retain, nonatomic) NSArray *twoByFourSuggestions;
@property (retain, nonatomic) NSArray *fourByFourSuggestions;
@property (retain, nonatomic) NSArray *fourByEightSuggestions;
@property (readonly, nonatomic) long long layoutType;
@property (nonatomic) double layoutScore;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSUUID *uuidOfHighestConfidenceSuggestion;
@property (nonatomic) char isValidForSuggestionsWidget;
@property (nonatomic) char confidenceWarrantsSnappingOrNPlusOne;
@property (nonatomic) char isNPlusOne;
@property (retain, nonatomic) NSString *widgetUniqueId;
@property (nonatomic) char isLowConfidenceStackRotationForStaleStack;
@property (nonatomic) unsigned long long numWidgetsInStack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)minSuggestionLayoutTypesForUILayoutType:(long long)a0;
+ (id)stringFromUILayoutType:(long long)a0;
+ (id)maxSuggestionLayoutTypesForUILayoutType:(long long)a0;
+ (char)isCompositeLayout:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)suggestionWithUUID:(id)a0;
- (id)compactDescription;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (char)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (char)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)allSuggestionsInLayout;
- (char)checkAndReportDecodingFailureIfNeededForBOOL:(char)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (char)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithLayoutType:(long long)a0 oneByOneSuggestions:(id)a1 oneByTwoSuggestions:(id)a2 twoByTwoSuggestions:(id)a3 oneByFourSuggestions:(id)a4 twoByFourSuggestions:(id)a5 fourByFourSuggestions:(id)a6 fourByEightSuggestions:(id)a7;
- (id)jsonRawData;
- (id)minSuggestionListInLayout;
- (char)isShortcutConversion;
- (int)_protoLayoutTypeFromLayoutType:(long long)a0;
- (long long)_layoutTypeFromProtoLayoutType:(int)a0;
- (id)arrayOfJSONFromSuggestionArray:(id)a0;
- (id)initWithLayoutType:(long long)a0 oneByOneSuggestions:(id)a1 oneByTwoSuggestions:(id)a2 twoByTwoSuggestions:(id)a3 oneByFourSuggestions:(id)a4 twoByFourSuggestions:(id)a5 fourByFourSuggestions:(id)a6 fourByEightSuggestions:(id)a7 uuid:(id)a8;
- (id)initWithLayoutType:(long long)a0 oneByOneSuggestions:(id)a1 oneByTwoSuggestions:(id)a2 twoByTwoSuggestions:(id)a3 oneByFourSuggestions:(id)a4 twoByFourSuggestions:(id)a5 fourByFourSuggestions:(id)a6 fourByEightSuggestions:(id)a7 uuid:(id)a8 layoutScore:(double)a9 isValidForSuggestionsWidget:(char)a10 confidenceWarrantsSnappingOrNPlusOne:(char)a11 isNPlusOne:(char)a12 isLowConfidenceStackRotationForStaleStack:(char)a13 widgetUniqueId:(id)a14 uuidOfHighestConfidenceSuggestion:(id)a15 numWidgetsInStack:(unsigned long long)a16;

@end
