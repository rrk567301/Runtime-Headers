@class NSNumber, NSString;

@interface CTLazuliMessageComposingIndicator : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *refreshTime;
@property (nonatomic) BOOL active;
@property (retain, nonatomic) NSString *lastActive;
@property (retain, nonatomic) NSString *contentType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliMessageComposingIndicator:(id)a0;

@end
