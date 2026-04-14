@class NSMutableArray, NSDate;

@interface NSPToken : NSObject <NSSecureCoding, NSCopying> {
    NSMutableArray *_tokens;
    NSDate *_expirationDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
