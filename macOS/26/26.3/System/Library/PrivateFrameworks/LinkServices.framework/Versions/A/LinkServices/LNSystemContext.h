@class LNAssistantContext, NSString, NSData, NSDate;

@interface LNSystemContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *preciseTimestamp;
@property (copy, nonatomic) NSString *staccatoInteractionType;
@property (copy, nonatomic) LNAssistantContext *assistantContext;
@property (copy, nonatomic) NSData *encodedCaptureAppContext;
@property (copy, nonatomic) NSString *interfaceIdiom;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
