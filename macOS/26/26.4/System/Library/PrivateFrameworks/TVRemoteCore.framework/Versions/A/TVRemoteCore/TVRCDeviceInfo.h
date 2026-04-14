@class NSString;

@interface TVRCDeviceInfo : NSObject

@property (readonly) NSString *mediaRemoteID;
@property (readonly) NSString *airplayID;
@property (readonly) NSString *idsID;

- (void).cxx_destruct;
- (id)description;
- (void)_populateValidIdentifiers:(id)a0;
- (BOOL)containsID:(id)a0;

@end
