@class NSString, APReceiverMediaRemoteCommunicationChannelInternal;

@interface APReceiverMediaRemoteCommunicationChannel : NSObject {
    APReceiverMediaRemoteCommunicationChannelInternal *_commChannel;
}

@property (readonly, nonatomic) NSString *uuid;

- (id)debugDescription;
- (id)initWithDictionary:(id)a0;
- (id)objectID;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (void)sendData:(id)a0 completionHandler:(id /* block */)a1;

@end
