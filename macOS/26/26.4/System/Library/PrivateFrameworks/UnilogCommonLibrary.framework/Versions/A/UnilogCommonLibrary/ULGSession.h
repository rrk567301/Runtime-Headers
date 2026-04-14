@class NSUUID, NSArray;

@interface ULGSession : NSObject <ULGSchemaType> {
    void /* unknown type, empty encoding */ idFieldStorage;
    void /* function */ events;
}

@property (nonatomic, copy) NSUUID *idField;
@property (nonatomic) unsigned long long createdTimestamp;
@property (nonatomic, copy) NSArray *events;

- (id)serialize;
- (void).cxx_destruct;

@end
