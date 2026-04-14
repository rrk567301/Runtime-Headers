@class NSString;

@interface APResult : NSObject

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *buyParams;
@property (readonly) NSString *itemIdentifier;
@property (readonly) NSString *productType;

- (id)compile;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 buyParams:(id)a1 itemIdentifier:(id)a2 productType:(id)a3;

@end
