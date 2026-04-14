@class NSString, NSDate;

@interface AAEventData : NSObject <AADataEventType> {
    void /* function */ eventID;
    void /* unknown type, empty encoding */ eventDate;
    void /* function */ eventPath;
    void /* function */ sessionID;
    void /* function */ appSessionID;
}

@property (class, nonatomic, readonly) NSString *dataName;

@property (nonatomic, readonly) NSString *eventID;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) NSString *eventPath;
@property (nonatomic, readonly) NSString *sessionID;
@property (nonatomic, readonly) NSString *appSessionID;

- (id)init;
- (void).cxx_destruct;
- (id)toDict;

@end
