@class NSString, _WKWebsiteDataSize, NSSet;

@interface WKWebsiteDataRecord : NSObject <WKObject> {
    struct AlignedStorage<API::WebsiteDataRecord, 8UL> { struct Storage { unsigned char data[96]; } m_storage; } _websiteDataRecord;
}

@property (readonly, nonatomic) _WKWebsiteDataSize *_dataSize;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSSet *dataTypes;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;

- (void)dealloc;
- (id)_originsStrings;

@end
