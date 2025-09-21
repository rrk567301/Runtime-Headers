@interface ABMetadataType : NSObject

+ (id)info;
+ (id)group;
+ (id)person;
+ (id)metadataTypeForIdentifier:(id)a0;

- (id)fileExtension;
- (id)baseFilenameForIdentifier:(id)a0;
- (id)filePrefix;
- (BOOL)fileShouldBeHidden;
- (id)filenameForIdentifier:(id)a0;
- (id)urlForBaseUrl:(id)a0 identifier:(id)a1;

@end
