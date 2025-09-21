@class NSString;

@interface _CNAutocompleteMutableSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy>

@property char includeContacts;
@property char includeRecents;
@property char includeSuggestions;
@property char includeLocalExtensions;
@property char includeDirectoryServers;
@property char includeCalendarServers;
@property char includeSupplementalResults;
@property char includePredictions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
