@class NSString;

@interface IMActionCalendar : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* function */ startTime;
    void /* function */ endTime;
    void /* function */ title;
    void /* function */ calDescription;
    void /* function */ fallbackUrl;
}

@property (nonatomic, readonly) NSString *startTime;
@property (nonatomic, readonly) NSString *endTime;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *calDescription;
@property (nonatomic, readonly) NSString *fallbackUrl;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithStartTime:(id)a0 endTime:(id)a1 title:(id)a2 calDescription:(id)a3 fallbackUrl:(id)a4;

@end
