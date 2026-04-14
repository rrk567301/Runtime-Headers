@class NSArray, MRGroupTopologyModificationRequest;

@interface MRModifyOutputContextRequestMessage : MRProtocolMessage {
    MRGroupTopologyModificationRequest *_request;
}

@property (readonly, nonatomic) NSArray *addingOutputDeviceUIDs;
@property (readonly, nonatomic) NSArray *removingOutputDeviceUIDs;
@property (readonly, nonatomic) NSArray *settingOutputDeviceUIDs;
@property (readonly, nonatomic) MRGroupTopologyModificationRequest *request;

- (id)initWithRequest:(id)a0;
- (unsigned int)contextType;
- (void).cxx_destruct;
- (unsigned long long)type;

@end
