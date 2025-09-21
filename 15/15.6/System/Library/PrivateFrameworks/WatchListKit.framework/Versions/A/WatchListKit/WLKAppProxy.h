@class NSString, NSNumber;

@interface WLKAppProxy : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic) char isEntitled;
@property (readonly, nonatomic) char isBetaApp;
@property (readonly, nonatomic) char isAppStoreVendable;
@property (readonly, nonatomic) char isSystemApp;
@property (readonly, nonatomic) char isTVApp;
@property (readonly, nonatomic) char supportsTVApp;
@property (readonly, copy, nonatomic) NSString *subscriptionInfo;
@property (readonly, copy, nonatomic) NSNumber *itemID;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
