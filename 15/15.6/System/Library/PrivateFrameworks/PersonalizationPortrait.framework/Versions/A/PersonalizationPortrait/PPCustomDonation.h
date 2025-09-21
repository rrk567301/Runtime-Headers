@interface PPCustomDonation : NSObject

+ (char)donateLabeledStrings:(id)a0 bundleId:(id)a1 groupId:(id)a2 documentId:(id)a3 error:(id *)a4;
+ (char)donateNotification:(id)a0 error:(id *)a1;
+ (char)donateParsecNamedEntitiesAndTopics:(id)a0 rawQuery:(id)a1 reformulatedQuery:(id)a2 source:(id)a3 error:(id *)a4;
+ (char)donatePhotosLocationNamedEntities:(id)a0 bundleId:(id)a1 error:(id *)a2;
+ (char)donatePhotosNamedEntities:(id)a0 bundleId:(id)a1 date:(id)a2 error:(id *)a3;
+ (char)donatePhotosOneUpLocationNamedEntities:(id)a0 bundleId:(id)a1 error:(id *)a2;
+ (char)donatePhotosTopics:(id)a0 bundleId:(id)a1 date:(id)a2 error:(id *)a3;
+ (char)donateSiriQuery:(id)a0 results:(id)a1 error:(id *)a2;

@end
