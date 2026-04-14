@class NSString, _TtC13HomeKitDaemon54ResidentStatusProtobufSerializerPreferredResidentsList, NSArray, NSNumber, _TtC13HomeKitDaemon53ResidentStatusProtobufSerializerResidentSelectionInfo;

@interface HomeKitDaemon.ResidentStatusProtobufSerializerResidentStatus : NSObject {
    void /* function */ softwareVersion;
    void /* function */ generationID;
    void /* function */ domainDataPairs;
}

@property (nonatomic, readonly) NSString *softwareVersion;
@property (nonatomic, readonly) NSNumber *location;
@property (nonatomic, readonly) NSNumber *networkConnectionType;
@property (nonatomic, readonly) NSNumber *hasReachableAccessories;
@property (nonatomic, readonly) NSString *generationID;
@property (nonatomic, readonly) _TtC13HomeKitDaemon54ResidentStatusProtobufSerializerPreferredResidentsList *preferredResidentsList;
@property (nonatomic, readonly) _TtC13HomeKitDaemon53ResidentStatusProtobufSerializerResidentSelectionInfo *selectionInfo;
@property (nonatomic, readonly) NSArray *domainDataPairs;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSoftwareVersion:(id)a0 location:(id)a1 networkConnectionType:(id)a2 hasReachableAccessories:(id)a3 generationID:(id)a4 preferredResidentsList:(id)a5 selectionInfo:(id)a6 domainDataPairs:(id)a7;

@end
