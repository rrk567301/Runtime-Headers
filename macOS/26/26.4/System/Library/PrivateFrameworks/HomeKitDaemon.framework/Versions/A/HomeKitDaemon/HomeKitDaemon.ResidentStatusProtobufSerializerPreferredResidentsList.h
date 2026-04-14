@class NSArray, NSDate;

@interface HomeKitDaemon.ResidentStatusProtobufSerializerPreferredResidentsList : NSObject {
    void /* function */ residentIDSIdentifiers;
    void /* unknown type, empty encoding */ modifiedTimestamp;
}

@property (nonatomic, readonly) NSArray *residentIDSIdentifiers;
@property (nonatomic, readonly) NSDate *modifiedTimestamp;

- (void).cxx_destruct;
- (id)init;
- (id)initWithResidentIDSIdentifiers:(id)a0 modifiedTimestamp:(id)a1;

@end
