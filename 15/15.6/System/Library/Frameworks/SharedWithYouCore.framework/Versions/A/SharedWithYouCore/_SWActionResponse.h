@class NSError;

@interface _SWActionResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char success;
@property (retain, nonatomic) NSError *error;

+ (id)responseWithSuccess:(char)a0 error:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSuccess:(char)a0 error:(id)a1;
- (char)isEqualToActionResponse:(id)a0;

@end
