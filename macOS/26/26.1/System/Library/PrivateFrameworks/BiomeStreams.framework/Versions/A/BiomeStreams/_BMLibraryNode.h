@interface _BMLibraryNode : NSObject

+ (id)identifier;
+ (id)sublibraries;
+ (id)validKeyPaths;
+ (id)allStreams;
+ (id)streamWithName:(id)a0;
+ (id)streams;
+ (id)streamNames;
+ (id)streamWithIdentifier:(id)a0 error:(id *)a1;
+ (id)allStreamIdentifiers;
+ (id)allValidEventClasses;
+ (id)allValidKeyPaths;

@end
