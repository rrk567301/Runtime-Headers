@class NSMutableDictionary;

@interface PKInkManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *inks;
@property (readonly, nonatomic) NSMutableDictionary *supportedInkIdentifiers;

+ (id)defaultInkManager;
+ (void)clearCachedManager;

- (id)init;
- (void).cxx_destruct;
- (id)supportedInkIdentifierFromIdentifier:(id)a0;
- (id)inkBehaviorForIdentifier:(id)a0 variant:(id)a1;
- (id)inkBehaviorForIdentifier:(id)a0 version:(unsigned long long)a1 variant:(id)a2;
- (void)addInkBehavior:(id)a0 forIdentifier:(id)a1;

@end
