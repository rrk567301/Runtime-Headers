@class NSString;

@interface BPSWindowState : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) id aggregate;
@property (nonatomic) char completed;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)metadata;
- (id)initWithIdentifier:(id)a0 aggregate:(id)a1 completed:(char)a2;

@end
