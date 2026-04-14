@class NSString;

@interface PPFeedbackItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *itemString;
@property (readonly, nonatomic) unsigned int itemFeedbackType;

+ (id)stringForItemFeedbackType:(unsigned int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToPPFeedbackItem:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithItemString:(id)a0 itemFeedbackType:(unsigned int)a1;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
