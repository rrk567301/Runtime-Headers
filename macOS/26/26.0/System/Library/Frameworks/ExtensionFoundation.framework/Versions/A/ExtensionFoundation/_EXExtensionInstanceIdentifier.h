@class NSUUID, NSString;

@interface _EXExtensionInstanceIdentifier : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) BOOL isDefault;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
