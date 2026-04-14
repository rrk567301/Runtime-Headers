@class NSNumber, NSDate;
@protocol EDPersistedMessage;

@interface EDOverrideRuleRecord : NSObject <NSCopying>

@property (readonly, nonatomic) NSNumber *category;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) id<EDPersistedMessage> message;

+ (id)recordWithCategory:(id)a0 date:(id)a1 message:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCategory:(id)a0 date:(id)a1 message:(id)a2;

@end
