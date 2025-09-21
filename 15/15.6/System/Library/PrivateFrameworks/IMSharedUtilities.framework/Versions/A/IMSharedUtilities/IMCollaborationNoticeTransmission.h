@class NSString, NSData, NSDate;

@interface IMCollaborationNoticeTransmission : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *guidString;
@property (readonly, nonatomic) NSData *eventData;
@property (readonly, nonatomic) long long eventType;
@property (readonly, copy, nonatomic) NSDate *date;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEventData:(id)a0 eventType:(long long)a1 guidString:(id)a2 date:(id)a3;

@end
