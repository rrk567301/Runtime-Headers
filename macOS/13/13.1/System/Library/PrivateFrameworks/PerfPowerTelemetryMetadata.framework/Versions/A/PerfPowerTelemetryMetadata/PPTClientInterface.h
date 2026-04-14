@interface PPTClientInterface : NSObject

+ (id)getMetadataByCategoryForSubsystem:(id)a0;
+ (id)getMetadataByNameForSubsystem:(id)a0 category:(id)a1;
+ (id)getMetadataForSubsystem:(id)a0 category:(id)a1 name:(id)a2;
+ (void)buildDeviceMetadata;
+ (id)getAllSubsystem;
+ (id)getMetadataForSubsystem:(id)a0;
+ (id)getMetadataForSubsystem:(id)a0 category:(id)a1;
+ (id)getMetadataForSubsystem:(id)a0 category:(id)a1 name:(id)a2 version:(double)a3;

@end
