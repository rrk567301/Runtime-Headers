@class NSMutableArray, NSDate;

@interface NSPToken : NSObject <NSSecureCoding, NSCopying> {
    NSMutableArray *_tokens;
    NSDate *_expirationDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
