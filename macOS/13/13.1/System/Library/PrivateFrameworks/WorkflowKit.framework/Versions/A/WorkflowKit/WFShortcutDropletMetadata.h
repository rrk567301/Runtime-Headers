@class NSString;

@interface WFShortcutDropletMetadata : NSObject

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSString *shortcutIdentifier;

+ (id)metadataOfMainBundle;
+ (id)metadataOfDroplet:(id)a0;

- (void).cxx_destruct;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)serializedRepresentation;
- (id)initWithVersion:(unsigned long long)a0 shortcutIdentifier:(id)a1;

@end
