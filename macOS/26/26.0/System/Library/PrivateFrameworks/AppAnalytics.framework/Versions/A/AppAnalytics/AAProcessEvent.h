@class NSString, AAJSON;

@interface AAProcessEvent : NSObject {
    void /* function */ name;
    void /* function */ version;
    void /* function */ groupName;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) AAJSON *json;
@property (nonatomic, readonly) NSString *groupName;

- (id)init;
- (void).cxx_destruct;

@end
