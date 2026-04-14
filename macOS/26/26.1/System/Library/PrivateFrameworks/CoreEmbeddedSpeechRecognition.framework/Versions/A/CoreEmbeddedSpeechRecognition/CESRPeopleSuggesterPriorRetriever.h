@class NSString, _PSContactSuggester;

@interface CESRPeopleSuggesterPriorRetriever : NSObject <CESRPriorRetriever> {
    _PSContactSuggester *_contactSuggester;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)_convertPeopleSuggesterPriorToPriorInfo:(id)a0;
- (id)_fetchContactPriorsForContactIds:(id)a0;
- (id)allPriorInfoWithThreshold:(unsigned int)a0;
- (id)priorInfoForItemIds:(id)a0;

@end
