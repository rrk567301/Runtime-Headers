@class NSArray, MRGroupTopologyModificationRequest;

@interface MRModifyOutputContextRequestMessage : MRProtocolMessage {
    MRGroupTopologyModificationRequest *_request;
}

@property (readonly, nonatomic) NSArray *addingOutputDeviceUIDs;
@property (readonly, nonatomic) NSArray *removingOutputDeviceUIDs;
@property (readonly, nonatomic) NSArray *settingOutputDeviceUIDs;
@property (readonly, nonatomic) MRGroupTopologyModificationRequest *request;

- (unsigned int)contextType;
- (id)initWithRequest:(id)a0;
- (unsigned long long)type;
- (void).cxx_destruct;

@end
