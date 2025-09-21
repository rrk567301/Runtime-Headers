@class NSString, NSDictionary;

@interface XNChange : NSObject

@property (retain, nonatomic) NSString *externalIdentifier;
@property (retain, nonatomic) NSString *objectSpecifier;
@property (nonatomic) long long changeType;
@property (retain, nonatomic) NSDictionary *cachedProperties;

- (id)managedObject;
- (void).cxx_destruct;
- (Class)managedObjectClass;
- (long long)changedObjectType;
- (id)initWithExternalIdentifier:(id)a0 objectSpecifier:(id)a1 changeType:(long long)a2 cachedProperties:(id)a3;

@end
