@class NSSet;

@interface GCUINavigationEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double timestamp;
@property (readonly) NSSet *allCommands;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTimestamp:(double)a0 commands:(id)a1;

@end
