@interface IMKDebugging : NSObject

+ (unsigned long long)topVisibleLine;
+ (id)visibleSelectionKeys;
+ (BOOL)isSendingDebugInformation;
+ (id)candidateInformationFromArray:(id)a0;
+ (void)setCandidates:(id)a0 candidateWindowVisible:(BOOL)a1 selectedCandidateSurface:(id)a2;
+ (void)setCandidateListDictionary:(id)a0 candidateWindowVisible:(BOOL)a1 selectedCandidateSurface:(id)a2 topVisibleLine:(unsigned long long)a3 visibleSelectionKeys:(id)a4 debuggingPasteboardName:(id)a5;
+ (void)setCandidateListDictionary:(id)a0 candidateWindowVisible:(BOOL)a1 selectedCandidateSurface:(id)a2 topVisibleLine:(unsigned long long)a3 visibleSelectionKeys:(id)a4;
+ (id)groupedCandidateArrayWithPasteboardNamed:(id)a0;
+ (id)groupedCandidateArray;
+ (id)informationStringWithIndex:(unsigned long long)a0 pasteboardNamed:(id)a1;
+ (id)informationStringWithIndex:(unsigned long long)a0;
+ (BOOL)candidateWindowIsVisible;
+ (id)selectedCandidateSurface;
+ (id)touchBarCandidateArray;
+ (id)touchBarSelectedCandidateSurface;

@end
