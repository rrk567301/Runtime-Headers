@class NSNumber;

@interface CTLazuliGroupChatCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL autoAcceptGroupChat;
@property (retain, nonatomic) NSNumber *maxGroupSize;
@property (nonatomic) BOOL supportsComposingIndicator;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliGroupChatCapabilities:(id)a0;

@end
