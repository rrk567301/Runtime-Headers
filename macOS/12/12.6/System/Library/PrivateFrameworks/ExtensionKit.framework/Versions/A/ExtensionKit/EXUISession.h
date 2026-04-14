@class NSUUID, NSString;

@interface EXUISession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *identifier;
@property (readonly) NSString *sceneIdentifier;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToSession:(id)a0;
- (id)initWithIdentifier:(id)a0 sceneIdentifier:(id)a1;

@end
