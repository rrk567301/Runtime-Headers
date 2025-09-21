@class CRLineWrappingConfiguration;

@interface CRLineWrapper : NSObject {
    CRLineWrappingConfiguration *_configuration;
    char _debugLineWrapping;
}

+ (id)joiningDelimiterForLine:(id)a0;
+ (id)joiningDelimiterForLine:(id)a0 useLineSeparatorAsLineBreak:(char)a1;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)paragraphsByUpdatingLineWrappingTypesInGroups:(id)a0 useHandwritingConfig:(char)a1;
- (id)_allLinesInGroups:(id)a0 groupMapping:(id *)a1;
- (unsigned long long)_lineWrappingTypeForResult:(id)a0 parameters:(id)a1 strictParameters:(id)a2 context:(id)a3 reason:(id *)a4;
- (char)_shouldInsertLineBreakForResult:(id)a0 parameters:(id)a1 context:(id)a2 reason:(id *)a3;
- (char)_shouldInsertLineBreakForResult:(id)a0 withOverwrappingCorrection:(char)a1 parameters:(id)a2 context:(id)a3 reason:(id *)a4;
- (char)_validateGroups:(id)a0;
- (id)paragraphsByUpdatingLineWrappingTypesInGroups:(id)a0;
- (void)predictLineWrappingTypesForAllLinesInGroups:(id)a0 useHandwritingConfig:(char)a1;

@end
