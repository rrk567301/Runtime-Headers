@class NSString, NSSet, NSArray;

@interface _WKWebExtensionDataRecord : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebExtensionDataRecord> { struct type { unsigned char __lx[48]; } data; } _webExtensionDataRecord;
}

@property (readonly, nonatomic) void *_webExtensionDataRecord;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSSet *dataTypes;
@property (readonly, nonatomic) unsigned long long totalSize;
@property (readonly, copy, nonatomic) NSArray *errors;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

@end
