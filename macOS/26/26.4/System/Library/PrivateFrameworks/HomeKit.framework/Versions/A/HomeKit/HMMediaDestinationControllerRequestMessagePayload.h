@class NSUUID, NSString;

@interface HMMediaDestinationControllerRequestMessagePayload : HMFObject <HMMessageEncoding>

@property (readonly, copy) NSUUID *destinationIdentifier;
@property (readonly) unsigned long long updateOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPayload:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithDestination:(id)a0 options:(unsigned long long)a1;
- (id)initWithDestinationIdentifier:(id)a0 updateOptions:(unsigned long long)a1;
- (id)initWithNoDestination;
- (id)payloadCopy;

@end
