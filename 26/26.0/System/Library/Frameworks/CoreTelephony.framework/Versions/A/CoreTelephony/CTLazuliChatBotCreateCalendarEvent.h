@class NSString;

@interface CTLazuliChatBotCreateCalendarEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *startTime;
@property (retain, nonatomic) NSString *endTime;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *calDescription;
@property (retain, nonatomic) NSString *fallbackUrl;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliChatBotCreateCalendarEvent:(id)a0;

@end
