@class GameMetadataHints, NSString, NSData, NSNumber;

@interface GamePolicy.GameLibraryGame : NSObject <NSSecureCoding> {
    void /* function */ persistentIdentifier;
    void /* function */ bundleID;
    void /* unknown type, empty encoding */ $__lazy_storage_$_config;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *persistentIdentifier;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSNumber *adamID;
@property (nonatomic, readonly) BOOL isGame;
@property (nonatomic, readonly) GameMetadataHints *gameMetadataHints;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
