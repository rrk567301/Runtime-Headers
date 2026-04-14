@interface _BMLibraryNode : NSObject

+ (id)streams;
+ (id)allStreams;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)sublibraries;
+ (id)validKeyPaths;
+ (id)identifier;
+ (id)streamWithIdentifier:(id)a0 error:(id *)a1;
+ (id)allStreamIdentifiers;
+ (id)allValidEventClasses;
+ (id)allValidKeyPaths;

@end
