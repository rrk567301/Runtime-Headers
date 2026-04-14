@class NSString;

@interface BookDataStore.CRDTModelSync : BCMutableCloudData <BCCloudData> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ protoData;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (id)zoneName;
- (id)initWithRecord:(id)a0;
- (id)recordType;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCloudData:(id)a0;

@end
