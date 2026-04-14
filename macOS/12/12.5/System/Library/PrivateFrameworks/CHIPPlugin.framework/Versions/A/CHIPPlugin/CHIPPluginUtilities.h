@interface CHIPPluginUtilities : HMFObject

+ (id)identifierStringWithCHIPNodeID:(id)a0;
+ (id)setupIDFromSetupCode:(id)a0 discriminator:(id)a1;
+ (id)chip_shortTypeFromUUID:(id)a0;
+ (long long)randomDiscriminator;
+ (long long)nextServiceInstanceID:(long long)a0 previousCharacteristicsCount:(unsigned long long)a1;
+ (BOOL)compareUnorderedUniqueNumberArray:(id)a0 withArray:(id)a1;
+ (unsigned long long)randomNodeID;

@end
