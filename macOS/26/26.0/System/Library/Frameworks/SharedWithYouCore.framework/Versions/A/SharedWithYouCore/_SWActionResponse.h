@class NSError;

@interface _SWActionResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;

+ (id)responseWithSuccess:(BOOL)a0 error:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToActionResponse:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSuccess:(BOOL)a0 error:(id)a1;

@end
