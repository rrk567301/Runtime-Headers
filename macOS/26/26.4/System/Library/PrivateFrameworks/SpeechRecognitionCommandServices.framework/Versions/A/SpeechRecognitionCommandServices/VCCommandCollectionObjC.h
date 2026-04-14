@class NSString, NSArray;

@interface VCCommandCollectionObjC : NSObject {
    void /* unknown type, empty encoding */ representedCollection;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) BOOL showInSettings;
@property (nonatomic, readonly) NSArray *commandIdentifiers;
@property (nonatomic, readonly) NSArray *commandIdentifiersForCurrentDevice;

+ (id)allCollectionIdentifiers;
+ (id)allCollections;
+ (id)collectionWithIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
