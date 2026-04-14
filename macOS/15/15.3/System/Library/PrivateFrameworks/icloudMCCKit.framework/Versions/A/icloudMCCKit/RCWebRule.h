@class NSDictionary, NSString, NSNumber;

@interface RCWebRule : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *sender;
@property (copy, nonatomic) NSString *category;
@property (retain, nonatomic) NSNumber *lastModifiedDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSender:(id)a0 category:(id)a1 lastModified:(double)a2;

@end
