@class NSString;

@interface SGStructuredEventDissector : SGPipelineDissector <SGMailMessageProcessing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)schemaPostalAddressForPostalAddressExtraction:(id)a0 addressThreshold:(unsigned long long)a1;
+ (void)addSchemaAsEnrichment:(id)a0 inMessage:(id)a1 parentEntity:(id)a2 eventClassification:(id)a3 mlDefaultExtraction:(char)a4;
+ (id)addressDictionaryForAddressComponents:(id)a0;
+ (id)annotateContent:(id)a0 withLabel:(id)a1 forMatchingString:(id)a2;
+ (id)annotationMatchingStringsForSubject:(id)a0;
+ (char)eventEnrichmentContainsReverseMappedTags:(id)a0;
+ (id)eventEnrichmentFromEntity:(id)a0;
+ (id)jsMessageLogsDictionaryForMailMessage:(id)a0;
+ (id)jsMessageLogsDictionaryForPrivacyAwareLogs:(id)a0;
+ (id)labelsWithMatchingStringsForMailMessage:(id)a0;
+ (void)logFailedExtractionWithClassification:(id)a0 missingEntities:(id)a1 mlSummary:(id)a2 shadowExtraction:(char)a3 timingProcessingInMs:(unsigned long long)a4 forMessage:(id)a5 parentEntity:(id)a6;
+ (void)logMLExtractionForSchema:(id)a0 mergedSchemaAndDiff:(id)a1 parentEntity:(id)a2 timingProcessingInMs:(unsigned long long)a3 eventClassification:(id)a4 mailMessage:(id)a5 shadowExtraction:(char)a6 mlDefaultExtraction:(char)a7;
+ (void)logMLInteractions:(id)a0 context:(id)a1 mlDefaultExtraction:(char)a2;
+ (id)mergeFallbackSchema:(id)a0 parentEntity:(id)a1;
+ (id)nilEntities:(id)a0;
+ (id)outputLogsForClassification:(id)a0;
+ (id)plainTextStringsByLabelInTaggedCharacterRanges:(id)a0 inPlainText:(id)a1;
+ (id)preprocessDomParserResult:(id)a0 subject:(id)a1 epoch:(double)a2 category:(id)a3 labelsWithMatchingStrings:(id)a4;
+ (id)preprocessWithoutXPCForHTML:(id)a0 subject:(id)a1 epoch:(double)a2 category:(id)a3 labelsWithMatchingStrings:(id)a4;
+ (id)schemaOrgAndMissingEntitiesForDUFoundInEvent:(id)a0 eventClassification:(id)a1 fromSuggestTool:(char)a2;
+ (id)schemaOrgAndMissingEntitiesForPreprocessed:(id)a0 eventClassification:(id)a1 fromSuggestTool:(char)a2;
+ (id)schemaOrgAndMissingEntitiesForPreprocessed:(id)a0 eventClassification:(id)a1 fromSuggestTool:(char)a2 addressThreshold:(unsigned long long)a3 pflTrainable:(char)a4 hasEvent:(char)a5;
+ (id)schemaStringForDateComponents:(id)a0;
+ (id)schemaStringForEventStatus:(unsigned char)a0;
+ (id)schemaStringForReservationStatus:(unsigned char)a0;
+ (unsigned long long)tokenCount:(id)a0;
+ (unsigned long long)tokenCountForPostalAddressComponents:(id)a0;
+ (id)tupleWithEntity:(id)a0 label:(id)a1;
+ (id)tupleWithError:(id)a0 label:(id)a1;

- (void)dissectMailMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (id)preprocessHTML:(id)a0 subject:(id)a1 epoch:(double)a2 category:(id)a3 labelsWithMatchingStrings:(id)a4;
- (id)tagsWithModelOutputFromEnrichedTaggedCharacterRanges:(id)a0;

@end
