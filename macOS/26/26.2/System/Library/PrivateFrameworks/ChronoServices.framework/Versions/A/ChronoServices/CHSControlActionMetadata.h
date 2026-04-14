@class NSString;

@interface CHSControlActionMetadata : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *intentType;
@property (readonly, copy, nonatomic) NSString *rawIntentType;
@property (readonly, nonatomic) BOOL isLauncher;
@property (readonly, nonatomic) BOOL isCameraCapture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithMetadata:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithIntentType:(id)a0;

@end
