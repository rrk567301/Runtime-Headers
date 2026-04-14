@class UARPTatsuManifestLocation, NSUUID, NSString, UARPTatsuBootNonceLocation, NSDictionary, NSMutableArray, UARPTatsuManifestDestination;

@interface UARPTatsuTicket : NSObject {
    NSMutableArray *_manifestProperties;
    NSMutableArray *_objectProperties;
    NSMutableArray *_ftabProperties;
}

@property (readonly) NSUUID *uuid;
@property (readonly) NSString *ticketName;
@property (readonly) UARPTatsuManifestDestination *manifestDestination;
@property (readonly) UARPTatsuBootNonceLocation *bootNonceLocation;
@property (readonly) UARPTatsuManifestLocation *manifestLocation;
@property (copy) NSDictionary *tatsuRequest;
@property (copy) NSDictionary *tatsuResponse;

- (void).cxx_destruct;
- (id)description;
- (id)ftabProperties;
- (id)initWithTicketDictionary:(id)a0;
- (id)initWithTicketName:(id)a0 componentName:(id)a1 tatsuRequest:(id)a2;
- (id)manifestProperties;
- (id)objectProperties;

@end
