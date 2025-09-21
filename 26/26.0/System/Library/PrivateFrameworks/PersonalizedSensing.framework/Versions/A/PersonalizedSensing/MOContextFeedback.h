@class NSUUID, NSArray, NSDate;

@interface MOContextFeedback : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *contextIdentifier;
@property (retain, nonatomic) NSDate *contextFetchedTimestamp;
@property (copy, nonatomic) NSArray *contextStringFeedback;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithContextIdentifier:(id)a0;

@end
