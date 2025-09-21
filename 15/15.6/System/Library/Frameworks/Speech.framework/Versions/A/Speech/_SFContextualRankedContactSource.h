@class NSString, NSDate;

@interface _SFContextualRankedContactSource : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sourceApplication;
@property (readonly, copy, nonatomic) NSDate *rankDate;
@property (readonly, nonatomic) char contactOnly;
@property (readonly, nonatomic) long long limit;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSourceApplication:(id)a0 rankDate:(id)a1 contactOnly:(char)a2 limit:(long long)a3;

@end
