@class NSString, MapsSuggestionsContacts;

@interface MapsSuggestionsRealContactsConnector : NSObject <MapsSuggestionsContactsConnector> {
    MapsSuggestionsContacts *_delegate;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receivedNotification:(id)a0;
- (id)imageDataForIdentifier:(id)a0;
- (void)setDelegate:(id)a0;
- (id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)a0 error:(id *)a1;
- (id)singleLineStringFromPostalAddress:(id)a0 addCountryName:(BOOL)a1;
- (id)dataForContactWithIdentifier:(id)a0;
- (void)startListeningForChanges;
- (id)contactForIdentifier:(id)a0;
- (void)stopListeningForChanges;
- (void).cxx_destruct;

@end
