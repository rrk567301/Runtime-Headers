@class NSData, NSNumber;

@interface CHIPPluginSoftwareUpdateProviderNotifyUpdateParams : NSObject

@property (readonly) NSData *updateToken;
@property (readonly) NSNumber *softwareVersion;
@property (readonly) NSNumber *didTimeout;

- (void).cxx_destruct;
- (id)initWithUpdateToken:(id)a0 softwareVersion:(id)a1 didTimeout:(id)a2;

@end
