@class NSString;

@interface TCTextCompositionCalendarUserAction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int calendarUserAction;
@property (readonly, nonatomic) NSString *userActionText;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCalendarUserAction:(int)a0 userActionText:(id)a1;

@end
