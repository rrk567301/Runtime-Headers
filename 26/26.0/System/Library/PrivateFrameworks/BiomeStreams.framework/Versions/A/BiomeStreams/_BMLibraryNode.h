@interface _BMLibraryNode : NSObject

+ (id)identifier;
+ (id)sublibraries;
+ (id)streams;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)validKeyPaths;
+ (id)allStreams;
+ (id)streamWithIdentifier:(id)a0 error:(id *)a1;
+ (id)allStreamIdentifiers;
+ (id)allValidEventClasses;
+ (id)allValidKeyPaths;

@end
