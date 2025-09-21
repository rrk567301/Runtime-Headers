@class NSArray, NSDictionary;

@interface SGExtractionDocument : NSObject

@property (retain, nonatomic) NSArray *enrichedTaggedCharacterRanges;
@property (retain, nonatomic) NSDictionary *modelOutput;
@property (retain, nonatomic) NSDictionary *indexSetForOutputNameLabel;

+ (id)allDayDateComponentsFromDate:(id)a0;
+ (id)candidatesForLabelTokenIndexes:(id)a0 inPlainText:(id)a1 forTaggedCharacterRanges:(id)a2;
+ (id)candidatesForLabelsWithPlainTextIndexSets:(id)a0 inPlainText:(id)a1;
+ (id)candidatesForPlainTextIndexSet:(id)a0 inPlainText:(id)a1;
+ (id)dateComponentsFromDataDetectorMatch:(id)a0 inferDates:(char)a1 approximateTime:(char)a2 partialDate:(char)a3 useEndForDurations:(char)a4;
+ (id)dateComponentsFromDate:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })firstRangeInIndexSet:(id)a0;
+ (id)indexSetForOutputNameLabelForModelOutput:(id)a0;
+ (id)keyForOutputName:(id)a0 label:(id)a1;
+ (id)labelTokenIndexesForOutputName:(id)a0 label:(id)a1 modelOutput:(id)a2;
+ (id)labelTokenIndexesForOutputName:(id)a0 label:(id)a1 modelOutput:(id)a2 maxMergeDistance:(unsigned long long)a3;
+ (id)mergeComponent:(unsigned long long)a0 usingBaseDateComponents:(id)a1 withDateComponents:(id)a2;
+ (id)mergeDetectedDateComponents:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRangeForIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTaggedCharacterRanges:(id)a1;

- (void).cxx_destruct;
- (id)candidatesForLabelTokenIndexes:(id)a0 inPlainText:(id)a1;
- (id)dataDetectorMatchesForTokenIndexes:(id)a0 dataDetectorMatches:(id)a1 allowDatesInPast:(char)a2 allowTimeOffset:(char)a3;
- (id)detectedDateComponentsForTokenIndexes:(id)a0 dataDetectorMatches:(id)a1 allowDatesInPast:(char)a2 inferDates:(char)a3 approximateTime:(char)a4 partialDate:(char)a5 allowTimeOffset:(char)a6 useEndForDurations:(char)a7;
- (id)detectedDateComponentsForTokenIndexes:(id)a0 dataDetectorMatches:(id)a1 allowDatesInPast:(char)a2 inferDates:(char)a3 approximateTime:(char)a4 partialDate:(char)a5 useEndForDurations:(char)a6;
- (id)initWithEnrichedTaggedCharacterRanges:(id)a0 modelOutput:(id)a1;
- (id)labelTokenIndexesForOutputName:(id)a0 label:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRangeForTokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
