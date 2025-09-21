@class NSUUID, NSString;

@interface _EXExtensionInstanceIdentifier : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) char isDefault;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;

@end
