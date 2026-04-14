@interface _BMLibraryNode : NSObject

+ (id)streams;
+ (id)sublibraries;
+ (id)identifier;
+ (id)validKeyPaths;
+ (id)streamWithName:(id)a0;
+ (id)allStreams;
+ (id)streamNames;
+ (id)streamWithIdentifier:(id)a0 error:(id *)a1;
+ (id)allStreamIdentifiers;
+ (id)allValidEventClasses;
+ (id)allValidKeyPaths;

@end
