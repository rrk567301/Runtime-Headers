@interface ABMetadataType : NSObject

+ (id)info;
+ (id)person;
+ (id)group;
+ (id)metadataTypeForIdentifier:(id)a0;

- (id)fileExtension;
- (id)filenameForIdentifier:(id)a0;
- (id)urlForBaseUrl:(id)a0 identifier:(id)a1;
- (id)filePrefix;
- (id)baseFilenameForIdentifier:(id)a0;
- (BOOL)fileShouldBeHidden;

@end
