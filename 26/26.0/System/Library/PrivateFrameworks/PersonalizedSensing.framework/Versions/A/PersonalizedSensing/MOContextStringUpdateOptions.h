@interface MOContextStringUpdateOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL appendMusicString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithAppendMusicString:(BOOL)a0;

@end
