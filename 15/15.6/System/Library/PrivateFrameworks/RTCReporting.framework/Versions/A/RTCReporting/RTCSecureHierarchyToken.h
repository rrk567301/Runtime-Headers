@class NSString;

@interface RTCSecureHierarchyToken : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *token;
@property (nonatomic) int level;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithToken:(id)a0 level:(int)a1;

@end
