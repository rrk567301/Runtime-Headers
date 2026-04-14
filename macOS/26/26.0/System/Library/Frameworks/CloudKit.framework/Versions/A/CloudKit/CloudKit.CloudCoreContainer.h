@class NSString;

@interface CloudKit.CloudCoreContainer : CKContainer {
    void /* unknown type, empty encoding */ subContainersMutex;
}

@property (nonatomic, readonly) NSString *description;

- (id)initWithContainerID:(id)a0;
- (id)initWithContainerID:(id)a0 options:(id)a1;
- (void).cxx_destruct;
- (id)initUnconfiguredContainerWithImplementation:(id)a0;
- (id)initWithContainerSetupInfo:(id)a0;
- (id)initWithImplementation:(id)a0 convenienceConfiguration:(id)a1;

@end
