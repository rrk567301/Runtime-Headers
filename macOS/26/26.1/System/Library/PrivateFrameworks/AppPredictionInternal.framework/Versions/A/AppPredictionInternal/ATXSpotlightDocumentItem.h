@class NSString;

@interface ATXSpotlightDocumentItem : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *filePath;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 filePath:(id)a2;

@end
