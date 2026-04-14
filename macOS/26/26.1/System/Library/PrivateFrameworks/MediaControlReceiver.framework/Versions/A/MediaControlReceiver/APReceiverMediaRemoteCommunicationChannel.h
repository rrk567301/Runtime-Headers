@class NSString, APReceiverMediaRemoteCommunicationChannelInternal;

@interface APReceiverMediaRemoteCommunicationChannel : NSObject {
    APReceiverMediaRemoteCommunicationChannelInternal *_commChannel;
}

@property (readonly, nonatomic) NSString *uuid;

- (void)invalidate;
- (id)objectID;
- (id)description;
- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (void)sendData:(id)a0 completionHandler:(id /* block */)a1;

@end
