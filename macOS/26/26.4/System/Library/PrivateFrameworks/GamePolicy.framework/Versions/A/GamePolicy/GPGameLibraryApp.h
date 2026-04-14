@class GameMetadataHints, NSString, NSData, NSNumber;

@interface GPGameLibraryApp : NSObject

@property (readonly, nonatomic) NSData *persistentIdentifier;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSNumber *adamID;
@property (readonly, nonatomic) BOOL isGame;
@property (readonly, nonatomic) GameMetadataHints *gameMetadataHints;

- (void).cxx_destruct;
- (id)initWithPersistentIdentifier:(id)a0 bundleID:(id)a1 adamID:(id)a2 isGame:(BOOL)a3;
- (id)initWithPersistentIdentifier:(id)a0 bundleID:(id)a1 adamID:(id)a2 isGame:(BOOL)a3 gameMetadataHints:(id)a4;

@end
