@class NSString;

@interface RTEventAgentHelper : NSObject

@property (retain, nonatomic) NSString *restorationIdentifier;

+ (char)launchdManaged;
+ (id)signingIdentifierFromSelf;

- (void).cxx_destruct;
- (id)initWithRestorationIdentifier:(id)a0;

@end
