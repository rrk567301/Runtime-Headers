@class NSSet;

@interface GCUINavigationEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double timestamp;
@property (readonly) NSSet *allCommands;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTimestamp:(double)a0 commands:(id)a1;

@end
