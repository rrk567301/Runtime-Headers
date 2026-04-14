@class NSArray, NSString, NSDictionary, _TtC9TipsCore29TipRecord, NSSet;

@interface TipsCore2.EventRecord : NSManagedObject {
    void /* unknown type, empty encoding */ _options;
}

@property (class, nonatomic, readonly) NSArray *attributes;
@property (class, nonatomic, readonly) NSArray *relationships;

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSDictionary *eventInfo;
@property (nonatomic, retain) _TtC9TipsCore29TipRecord *tip;
@property (nonatomic, copy) NSSet *rules;
@property (nonatomic, copy) NSSet *donations;
@property (nonatomic) long long optionsValue;

- (void).cxx_destruct;
- (void).cxx_construct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
