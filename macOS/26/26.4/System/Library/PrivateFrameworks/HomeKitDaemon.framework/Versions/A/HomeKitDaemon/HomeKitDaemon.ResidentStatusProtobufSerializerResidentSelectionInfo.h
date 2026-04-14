@class NSUUID, NSDate;

@interface HomeKitDaemon.ResidentStatusProtobufSerializerResidentSelectionInfo : NSObject {
    void /* unknown type, empty encoding */ selectionTimestamp;
    void /* unknown type, empty encoding */ userPreferredResidentIDSIdentifier;
}

@property (nonatomic, readonly) NSDate *selectionTimestamp;
@property (nonatomic, readonly) unsigned long long selectionMode;
@property (nonatomic, readonly) NSUUID *userPreferredResidentIDSIdentifier;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSelectionTimestamp:(id)a0 selectionMode:(unsigned long long)a1 userPreferredResidentIDSIdentifier:(id)a2;

@end
