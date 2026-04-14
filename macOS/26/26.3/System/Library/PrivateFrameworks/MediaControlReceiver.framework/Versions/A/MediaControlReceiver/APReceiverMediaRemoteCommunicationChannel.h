@class NSString, APReceiverMediaRemoteCommunicationChannelInternal;

@interface APReceiverMediaRemoteCommunicationChannel : NSObject {
    APReceiverMediaRemoteCommunicationChannelInternal *_commChannel;
}

@property (readonly, nonatomic) NSString *uuid;

- (void)invalidate;
- (id)debugDescription;
- (id)description;
- (id)objectID;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (void)sendData:(id)a0 completionHandler:(id /* block */)a1;

@end
