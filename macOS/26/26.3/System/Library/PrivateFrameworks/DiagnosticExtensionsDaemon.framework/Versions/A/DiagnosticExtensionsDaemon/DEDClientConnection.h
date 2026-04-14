@class NSNumber;

@interface DEDClientConnection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) NSNumber *pid;

- (id)description;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
