@class ULCoordinate, NSUUID, NSString, NSDate;

@interface MicroLocationDaemon.AnchorSmootherData : NSObject {
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ timestamp;
    void /* function */ name;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) ULCoordinate *coordinate;
@property (nonatomic, readonly) NSString *contextLayer;
@property (nonatomic, readonly) unsigned long long deviceClass;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) NSString *name;

+ (id)from:(id)a0 uuid:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUuid:(id)a0 coordinate:(id)a1 contextLayer:(id)a2 deviceClass:(unsigned long long)a3 timestamp:(id)a4 name:(id)a5;

@end
