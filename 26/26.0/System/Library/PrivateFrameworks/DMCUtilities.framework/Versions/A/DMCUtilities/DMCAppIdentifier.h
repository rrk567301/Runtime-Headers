@class NSString;

@interface DMCAppIdentifier : NSObject

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *personaID;
@property (readonly, nonatomic) NSString *identifier;

+ (id)newAppIdentifierWithIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 personaID:(id)a1;

@end
