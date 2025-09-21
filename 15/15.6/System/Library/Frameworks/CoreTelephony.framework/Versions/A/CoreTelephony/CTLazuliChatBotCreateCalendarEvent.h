@class NSString;

@interface CTLazuliChatBotCreateCalendarEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *startTime;
@property (retain, nonatomic) NSString *endTime;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *calDescription;
@property (retain, nonatomic) NSString *fallbackUrl;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (char)isEqualToCTLazuliChatBotCreateCalendarEvent:(id)a0;

@end
