@class NSString, NSDictionary;

@interface TVISCinematicAssetEntity : NSManagedObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *shotIdentifier;
@property (copy, nonatomic) NSString *localizedNameKey;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (nonatomic) long long preferredOrder;
@property (nonatomic) short playOrder;
@property (copy, nonatomic) NSDictionary *urls;

+ (id)fetchRequest;
+ (id)entityDescriptionForContext:(id)a0;

@end
