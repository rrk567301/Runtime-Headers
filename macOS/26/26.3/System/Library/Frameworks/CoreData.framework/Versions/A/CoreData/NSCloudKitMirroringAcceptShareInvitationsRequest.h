@class NSArray;

@interface NSCloudKitMirroringAcceptShareInvitationsRequest : NSCloudKitMirroringRequest {
    NSArray *_shareURLsToAccept;
    NSArray *_shareMetadatasToAccept;
}

- (id)initWithOptions:(id)a0 completionBlock:(id /* block */)a1;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
