@class NSString;

@interface BPSWindowState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) id aggregate;
@property (nonatomic) BOOL completed;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)metadata;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 aggregate:(id)a1 completed:(BOOL)a2;

@end
