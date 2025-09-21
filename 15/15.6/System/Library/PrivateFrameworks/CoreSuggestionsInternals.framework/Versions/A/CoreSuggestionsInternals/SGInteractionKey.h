@class NSString;

@interface SGInteractionKey : SGMessageKey

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *personHandle;

+ (char)isSupportedEntityType:(long long)a0;

- (id)description;
- (id)init;
- (id)initWithBundleId:(id)a0 personHandle:(id)a1;
- (id)initWithSource:(id)a0 uniqueIdentifier:(id)a1;

@end
