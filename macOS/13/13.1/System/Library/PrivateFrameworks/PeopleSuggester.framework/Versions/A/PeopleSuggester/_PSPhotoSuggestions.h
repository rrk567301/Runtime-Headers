@interface _PSPhotoSuggestions : NSObject

+ (id)contactIDsByAssetPresenceInAttachments:(id)a0 visualViewHandle:(id)a1;
+ (id)suggestionTemplateForPhotoContactIdWithMessages:(id)a0 cdInteraction:(id)a1 reason:(id)a2 reasonType:(id)a3;
+ (id)partitionPeopleSuggestionProxiesFromPhotosByAssetPresenceInAttachments:(id)a0 photoSuggestedPeople:(id)a1 contactIDsInAssets:(id)a2;
+ (id)photoSuggestedPeopleFromAttachments:(id)a0;

@end
