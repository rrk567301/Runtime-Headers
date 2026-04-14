@class NSString, CKVPeopleSuggesterBridge;

@interface CKVPeopleSuggesterPriorRetriever : NSObject <CKVPriorRetriever> {
    CKVPeopleSuggesterBridge *_peopleSuggesterBridge;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPeopleSuggesterBridge:(id)a0;
- (id)_convertPeopleSuggesterPriorToPriorInfo:(id)a0;
- (id)getPriorInfoForContactIds:(id)a0;

@end
