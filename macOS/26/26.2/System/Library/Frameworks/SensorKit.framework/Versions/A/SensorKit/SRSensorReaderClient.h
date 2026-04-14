@class SRReaderSensorKitBackend;

@interface SRSensorReaderClient : NSObject <SRSensorKitServiceClientReading> {
    SRReaderSensorKitBackend *_reader;
}

- (void)resetDatastoreFiles:(id)a0;
- (void).cxx_destruct;

@end
