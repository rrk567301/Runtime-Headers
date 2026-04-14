@class NSString;

@interface BookDataStore.CRDTModelSync : BCMutableCloudData <BCCloudData> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ protoData;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (id)identifier;
- (id)recordType;
- (id)zoneName;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRecord:(id)a0;
- (id)initWithCloudData:(id)a0;

@end
