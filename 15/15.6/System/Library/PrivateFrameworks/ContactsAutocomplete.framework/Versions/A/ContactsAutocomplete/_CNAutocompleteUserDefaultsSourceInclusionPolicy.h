@class NSString, CNUserDefaults;

@interface _CNAutocompleteUserDefaultsSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy>

@property (readonly) CNUserDefaults *userDefaults;
@property (readonly) char includeContacts;
@property (readonly) char includeRecents;
@property (readonly) char includeSuggestions;
@property (readonly) char includeLocalExtensions;
@property (readonly) char includeDirectoryServers;
@property (readonly) char includeCalendarServers;
@property (readonly) char includeSupplementalResults;
@property (readonly) char includePredictions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0;

@end
