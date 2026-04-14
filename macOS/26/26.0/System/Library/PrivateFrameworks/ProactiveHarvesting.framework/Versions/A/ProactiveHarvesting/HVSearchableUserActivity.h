@class NSString, CSSearchableItem, NSUserActivity;

@interface HVSearchableUserActivity : NSObject <BMIdentifiableContentEvent> {
    NSString *_persistentIdentifierOrFallback;
}

@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) NSString *domainId;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) CSSearchableItem *searchableItem;

+ (id)uniqueIdForPersistentIdentifier:(id)a0;

- (id)initWithUserActivity:(id)a0 searchableItem:(id)a1;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
