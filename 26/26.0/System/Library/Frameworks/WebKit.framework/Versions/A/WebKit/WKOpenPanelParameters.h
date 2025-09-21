@class NSArray, NSString;

@interface WKOpenPanelParameters : NSObject <WKObject> {
    struct AlignedStorage<API::OpenPanelParameters, 8UL> { struct Storage { unsigned char data[72]; } m_storage; } _openPanelParameters;
}

@property (readonly, copy, nonatomic) NSArray *_acceptedMIMETypes;
@property (readonly, copy, nonatomic) NSArray *_acceptedFileExtensions;
@property (readonly, copy, nonatomic) NSArray *_allowedFileExtensions;
@property (readonly, nonatomic) BOOL allowsMultipleSelection;
@property (readonly, nonatomic) BOOL allowsDirectories;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
