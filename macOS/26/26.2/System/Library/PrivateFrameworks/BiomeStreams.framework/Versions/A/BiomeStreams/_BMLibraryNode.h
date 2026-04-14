@interface _BMLibraryNode : NSObject

+ (id)streams;
+ (id)identifier;
+ (id)validKeyPaths;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)sublibraries;
+ (id)allStreams;
+ (id)streamWithIdentifier:(id)a0 error:(id *)a1;
+ (id)allStreamIdentifiers;
+ (id)allValidEventClasses;
+ (id)allValidKeyPaths;

@end
