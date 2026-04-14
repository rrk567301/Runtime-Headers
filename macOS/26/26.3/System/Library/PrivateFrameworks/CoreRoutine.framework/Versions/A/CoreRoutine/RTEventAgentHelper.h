@class NSString;

@interface RTEventAgentHelper : NSObject

@property (retain, nonatomic) NSString *restorationIdentifier;

+ (id)signingIdentifierFromSelf;
+ (BOOL)launchdManaged;

- (id)initWithRestorationIdentifier:(id)a0;
- (void).cxx_destruct;

@end
