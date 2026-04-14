@class NSString;

@interface GKBasePlayer : NSObject

@property (readonly, retain) NSString *playerID;
@property (readonly) NSString *displayName;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)displayName;
- (id)playerID;

@end
