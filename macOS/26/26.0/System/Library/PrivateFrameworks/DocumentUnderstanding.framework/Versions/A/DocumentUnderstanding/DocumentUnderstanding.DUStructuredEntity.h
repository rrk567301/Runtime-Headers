@class _TtC21DocumentUnderstanding13DUDisplayInfo, NSString, NSArray, NSDictionary, _TtC21DocumentUnderstanding11DUDebugInfo, _TtC21DocumentUnderstanding15DUCalendarEvent;

@interface DocumentUnderstanding.DUStructuredEntity : NSObject <NSCoding, NSCopying> {
    void /* function */ title;
    void /* function */ type;
    void /* function */ labels;
    void /* function */ phoneNumber;
    void /* function */ email;
    void /* function */ url;
    void /* function */ addressComponents;
    void /* function */ homeAutomationID;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSArray *labels;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSDictionary *addressComponents;
@property (nonatomic, retain) _TtC21DocumentUnderstanding15DUCalendarEvent *calendarEvent;
@property (nonatomic, copy) NSString *homeAutomationID;
@property (nonatomic, retain) _TtC21DocumentUnderstanding13DUDisplayInfo *displayInfo;
@property (nonatomic, retain) _TtC21DocumentUnderstanding11DUDebugInfo *responseDebugInfo;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
