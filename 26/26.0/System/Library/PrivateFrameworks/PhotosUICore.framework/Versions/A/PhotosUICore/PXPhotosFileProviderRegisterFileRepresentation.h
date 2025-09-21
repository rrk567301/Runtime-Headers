@class NSURL, NSString, UTType;

@interface PXPhotosFileProviderRegisterFileRepresentation : NSObject {
    void /* unknown type, empty encoding */ fileProviderURL;
    void /* unknown type, empty encoding */ contentType;
    void /* function */ uuid;
    void /* function */ identifierCode;
}

@property (nonatomic, readonly) NSURL *fileProviderURL;
@property (nonatomic, readonly) UTType *contentType;
@property (nonatomic, readonly) BOOL hasLimitedVisibility;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) NSString *identifierCode;
@property (nonatomic, readonly) BOOL isThumbnail;

- (id)init;
- (void).cxx_destruct;

@end
