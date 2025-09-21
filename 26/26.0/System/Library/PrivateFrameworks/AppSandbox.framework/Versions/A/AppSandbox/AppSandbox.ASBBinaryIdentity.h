@class NSString;

@interface AppSandbox.ASBBinaryIdentity : NSObject <NSCoding> {
    void /* unknown type, empty encoding */ validationCategory;
    void /* function */ signingIdentifier;
    void /* function */ teamIdentifier;
}

@property (nonatomic, readonly) NSString *signingIdentifier;
@property (nonatomic, readonly) NSString *teamIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

+ (id)identityWithCode:(const struct __SecCode { } *)a0 error:(id *)a1;
+ (id)identityWithToken:(struct { unsigned int x0[8]; })a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
