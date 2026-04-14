@class NSString;

@interface BookDataStore.CRDTModelSync : BCMutableCloudData <BCCloudData> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ protoData;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (id)initWithRecord:(id)a0;
- (id)recordType;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)zoneName;
- (id)identifier;
- (id)initWithCloudData:(id)a0;

@end
